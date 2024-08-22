// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMLEGACYPROFILESSPECIFIERPROVIDER_H
#define RMLEGACYPROFILESSPECIFIERPROVIDER_H

@class NSArray, RMObserverStore;

#import <Foundation/Foundation.h>


@interface RMLegacyProfilesSpecifierProvider : NSObject

@property (retain, nonatomic) NSArray *declarations; // ivar: _declarations
@property (retain, nonatomic) RMObserverStore *observerStore; // ivar: _observerStore


-(id)_isActivatedProfileText:(id)arg0 ;
-(id)initWithWithObserverStore:(id)arg0 ;
-(id)specifiers;
-(void)activateConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)deactivateConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadProfilesFromConfigurationsWithCompletionHandler:(id)arg0 ;


@end


#endif