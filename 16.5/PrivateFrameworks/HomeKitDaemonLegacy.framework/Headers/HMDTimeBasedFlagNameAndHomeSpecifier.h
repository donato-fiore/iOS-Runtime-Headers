// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTIMEBASEDFLAGNAMEANDHOMESPECIFIER_H
#define HMDTIMEBASEDFLAGNAMEANDHOMESPECIFIER_H

@class NSString, NSUUID;
@protocol HMDTimeBasedFlagSpecifying;

#import <Foundation/Foundation.h>


@interface HMDTimeBasedFlagNameAndHomeSpecifier : NSObject <HMDTimeBasedFlagSpecifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *flagName; // ivar: _flagName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)specifierWithFlagName:(id)arg0 homeUUID:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFlagName:(id)arg0 homeUUID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif