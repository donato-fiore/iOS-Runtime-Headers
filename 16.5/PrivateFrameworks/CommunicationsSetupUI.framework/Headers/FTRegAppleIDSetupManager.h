// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTREGAPPLEIDSETUPMANAGER_H
#define FTREGAPPLEIDSETUPMANAGER_H

@class NSArray, IDSAccountController, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FTRegAppleIDSetupManager : NSObject

@property (copy, nonatomic) NSArray *candidateAliases; // ivar: _candidateAliases
@property (retain, nonatomic) IDSAccountController *faceTimeAccountController; // ivar: _faceTimeAccountController
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) IDSAccountController *iMessageAccountController; // ivar: _iMessageAccountController
@property (copy, nonatomic) NSArray *selectedAliases; // ivar: _selectedAliases
@property (copy, nonatomic) NSString *selectionSummaryText; // ivar: _selectionSummaryText
@property (retain, nonatomic) NSMutableDictionary *setupOperations; // ivar: _setupOperations
@property (readonly, nonatomic) BOOL shouldShowAliasSelectionUI;


+(id)sharedInstance;
-(BOOL)_shouldAttemptAccountRegistration;
-(BOOL)aliasIsEnabled:(id)arg0 ;
-(BOOL)beginSetupWithCompletionHandler:(id)arg0 ;
-(BOOL)showsPhoneNumberDisplayString;
-(id)_aliasesForDictionary:(id)arg0 ;
-(id)_appleID;
-(id)accountControllerForService:(id)arg0 ;
-(id)init;
-(id)phoneNumberDisplayString;
-(void)_cleanup;
-(void)_notifyFailureWithError:(id)arg0 ;
-(void)_notifySuccess;
-(void)_notifySuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_updateCandidateAliases;
-(void)_updateSelectionSummaryText;
-(void)addSetupDictionary:(id)arg0 forService:(NSInteger)arg1 ;


@end


#endif