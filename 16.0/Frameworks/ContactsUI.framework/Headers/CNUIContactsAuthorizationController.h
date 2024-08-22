// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICONTACTSAUTHORIZATIONCONTROLLER_H
#define CNUICONTACTSAUTHORIZATIONCONTROLLER_H

@class NSArray;
@protocol CNUIContactsAuthorizationControllerDelegate;

#import <Foundation/Foundation.h>

#import "CNUICoreContactsAuthorizationModel.h"
#import "CNUIContactsAuthorizationStore.h"

@interface CNUIContactsAuthorizationController : NSObject

@property (readonly, nonatomic) NSArray *bundleIdentifiersOfAppsWithContactsAccessInfo;
@property (nonatomic) NSObject<CNUIContactsAuthorizationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL foundAppsWithContactsAccessInfo;
@property (retain, nonatomic) CNUICoreContactsAuthorizationModel *model; // ivar: _model
@property (readonly, nonatomic) CNUIContactsAuthorizationStore *store; // ivar: _store


+(id)authorizationPaneContactsAppLabel;
+(id)authorizationPaneFooterLabel;
+(id)authorizationPaneHeaderLabel;
+(id)validAuthorizationLabelsForValues;
+(id)validAuthorizationValues;
-(id)authorizationLevelOfAppWithBundleIdentifier:(id)arg0 ;
-(id)createModel;
-(id)iconOfAppWithBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)nameOfAppWithBundleIdentifier:(id)arg0 ;
-(void)lazilyLoadIconsForRemoteItems;
-(void)saveModel;
-(void)setAuthorizationLevel:(id)arg0 ofAppWithBundleIdentifier:(id)arg1 ;


@end


#endif