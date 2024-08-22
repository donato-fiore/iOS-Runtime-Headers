// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPERSONMETADATA_H
#define ARPERSONMETADATA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ARPersonMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) CGFloat meanDepth; // ivar: _meanDepth


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBoundingBox:(struct CGRect )arg0 meanDepth:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDepthBasedPersonDetectionResult:(id)arg0 ;
-(struct CGRect )rectScaledToSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif