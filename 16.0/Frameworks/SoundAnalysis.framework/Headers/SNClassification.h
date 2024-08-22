// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNCLASSIFICATION_H
#define SNCLASSIFICATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding, SNConfidenceProvidingWritable;

#import <Foundation/Foundation.h>


@interface SNClassification : NSObject <NSCopying, NSSecureCoding, SNConfidenceProvidingWritable>



@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 confidence:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif