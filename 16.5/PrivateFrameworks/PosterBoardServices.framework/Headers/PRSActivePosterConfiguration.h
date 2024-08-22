// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSACTIVEPOSTERCONFIGURATION_H
#define PRSACTIVEPOSTERCONFIGURATION_H

@class NSString;
@protocol BSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PRSPosterConfiguration.h"

@interface PRSActivePosterConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PRSPosterConfiguration *homeScreenPosterConfiguration; // ivar: _homeScreenPosterConfiguration
@property (readonly, nonatomic) PRSPosterConfiguration *lockScreenPosterConfiguration; // ivar: _lockScreenPosterConfiguration
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLockScreenPosterConfiguration:(id)arg0 homeScreenPosterConfiguration:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif