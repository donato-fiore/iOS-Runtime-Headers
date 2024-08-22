// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIJSRESTRICTIONS_H
#define SKUIJSRESTRICTIONS_H

@class IKJSObject;
@protocol SKUIJSRestrictions;


#import "SKUIClientContext.h"

@interface SKUIJSRestrictions : IKJSObject <SKUIJSRestrictions>

 {
    SKUIClientContext *_clientContext;
}




-(BOOL)isRestrictedApp:(id)arg0 ;
-(NSInteger)_explicitRestrictionAlertTypeForTypeString:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 clientContext:(id)arg1 ;
-(void)didDisplayExplicitRestrictionAlertOfType:(id)arg0 ;
-(void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg0 ;
-(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg0 ;
-(void)isRestrictionsPasscodeSet:(id)arg0 ;
-(void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg0 ;
-(void)setAllowExplicitContent;
-(void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg0 ;


@end


#endif