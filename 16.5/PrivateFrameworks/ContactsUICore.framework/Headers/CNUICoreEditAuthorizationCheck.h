// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUICOREEDITAUTHORIZATIONCHECK_H
#define CNUICOREEDITAUTHORIZATIONCHECK_H

@class CNContact, CNContainer;
@protocol CNUICoreParentContainerProvider, CNUICoreScreentimePasscodeCheck;

#import <Foundation/Foundation.h>


@interface CNUICoreEditAuthorizationCheck : NSObject

@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) BOOL ignoresParentalRestrictions; // ivar: _ignoresParentalRestrictions
@property (readonly, nonatomic) NSObject<CNUICoreParentContainerProvider> *linkedParentContainerProvider; // ivar: _linkedParentContainerProvider
@property (readonly, nonatomic) CNContainer *parentContainer; // ivar: _parentContainer
@property (readonly, nonatomic) NSObject<CNUICoreScreentimePasscodeCheck> *screenTimePasscodeStatusCheck; // ivar: _screenTimePasscodeStatusCheck


+(BOOL)isAuthorizationPasscodeEnabledOnDevice;
+(id)containerProviderWithContactStore:(id)arg0 ;
+(id)log;
-(BOOL)authorizationPasscodeEnabledOnDevice;
-(BOOL)canPerformValidAuthorizationCheck;
-(BOOL)editAltersRestrictedInformation;
-(BOOL)shouldBypassRestrictionsGivenAuthorizationResult:(NSInteger)arg0 ;
-(BOOL)shouldPromptForPasscodeAuthorization;
-(BOOL)shouldRespectParentalRestrictions;
-(id)initWithContact:(id)arg0 parentContainer:(id)arg1 ignoresParentalRestrictions:(BOOL)arg2 ;
-(id)initWithContact:(id)arg0 parentContainer:(id)arg1 ignoresParentalRestrictions:(BOOL)arg2 linkedParentContainerProvider:(id)arg3 ;
-(id)initWithContact:(id)arg0 parentContainer:(id)arg1 ignoresParentalRestrictions:(BOOL)arg2 screenTimePasscodeStatusCheck:(id)arg3 linkedParentContainerProvider:(id)arg4 ;


@end


#endif