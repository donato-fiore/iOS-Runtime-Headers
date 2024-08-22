// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCLOCKUPFEATURESIGNPOSTTAGS_H
#define ASCLOCKUPFEATURESIGNPOSTTAGS_H

@class NSString, NSSet;
@protocol ASCLockupFeature;

#import <Foundation/Foundation.h>


@interface ASCLockupFeatureSignpostTags : NSObject <ASCLockupFeature>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *signpostTags; // ivar: _signpostTags
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignpostTags:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif