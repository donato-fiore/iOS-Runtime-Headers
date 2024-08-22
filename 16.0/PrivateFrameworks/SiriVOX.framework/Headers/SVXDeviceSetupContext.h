// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXDEVICESETUPCONTEXT_H
#define SVXDEVICESETUPCONTEXT_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SVXDeviceSetupFlowScene.h"
#import "SVXDeviceSetupOptions.h"

@interface SVXDeviceSetupContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *beginDate; // ivar: _beginDate
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) SVXDeviceSetupFlowScene *flowScene; // ivar: _flowScene
@property (readonly, copy, nonatomic) SVXDeviceSetupOptions *options; // ivar: _options
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(NSUInteger)arg0 ;
-(id)initWithTimestamp:(NSUInteger)arg0 options:(id)arg1 ;
-(id)initWithTimestamp:(NSUInteger)arg0 options:(id)arg1 flowScene:(id)arg2 ;
-(id)initWithTimestamp:(NSUInteger)arg0 options:(id)arg1 flowScene:(id)arg2 beginDate:(id)arg3 endDate:(id)arg4 ;
-(id)initWithTimestamp:(NSUInteger)arg0 presentsAlternativeFlowWhenStoreAccountIsUnavailable:(BOOL)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif