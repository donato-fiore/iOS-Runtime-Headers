// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNDETECTORVARIANT_H
#define SNDETECTORVARIANT_H

@class NSString, MLModel;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SNDetectorVariant : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSString *detectorIdentifier; // ivar: _detectorIdentifier
@property (readonly) NSInteger type; // ivar: _type
@property (readonly) MLModel *vggishBasedMLModel; // ivar: _vggishBasedMLModel


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDetectorVariant:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetectorIdentifier:(id)arg0 ;
-(id)initWithVGGishBasedMLModel:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif