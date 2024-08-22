// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSSTATUSBARSTYLEOVERRIDESASSERTIONDATA_H
#define SBSSTATUSBARSTYLEOVERRIDESASSERTIONDATA_H

@class NSString;
@protocol NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExclusive) BOOL exclusive; // ivar: _exclusive
@property (readonly) NSUInteger hash;
@property (nonatomic) int pid; // ivar: _pid
@property (nonatomic) BOOL showsWhenForeground; // ivar: _showsWhenForeground
@property (nonatomic) NSUInteger statusBarStyleOverrides; // ivar: _statusBarStyleOverrides
@property (copy, nonatomic) NSString *statusString; // ivar: _statusString
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatusBarStyleOverrides:(NSUInteger)arg0 forPID:(int)arg1 exclusive:(BOOL)arg2 showsWhenForeground:(BOOL)arg3 ;
-(id)initWithStatusBarStyleOverrides:(NSUInteger)arg0 forPID:(int)arg1 exclusive:(BOOL)arg2 showsWhenForeground:(BOOL)arg3 uniqueIdentifier:(id)arg4 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif