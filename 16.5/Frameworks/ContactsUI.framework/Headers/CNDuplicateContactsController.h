// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDUPLICATECONTACTSCONTROLLER_H
#define CNDUPLICATECONTACTSCONTROLLER_H

@class CNContactFormatter, CNContactStore;
@protocol _TtP10ContactsUI26DuplicatesUIHelperDelegate_, CNContactDataSource, CNDuplicateContactsControllerDelegate;

#import <Foundation/Foundation.h>

#import "_TtC10ContactsUI18DuplicatesUIHelper.h"
#import "CNUIContactsEnvironment.h"

@interface CNDuplicateContactsController : NSObject <_TtP10ContactsUI26DuplicatesUIHelperDelegate_>



@property (nonatomic) NSInteger allDuplicatesCount; // ivar: _allDuplicatesCount
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSObject<CNContactDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<CNDuplicateContactsControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _TtC10ContactsUI18DuplicatesUIHelper *duplicatesUIHelper; // ivar: _duplicatesUIHelper
@property (retain, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (nonatomic) BOOL isAlreadyFindingDuplicates; // ivar: _isAlreadyFindingDuplicates
@property (nonatomic) BOOL isPerformingMerge; // ivar: _isPerformingMerge
@property (nonatomic) NSInteger lastIgnoredNewDuplicatesCount;
@property (nonatomic) CGFloat mergeCompletedAt; // ivar: _mergeCompletedAt
@property (nonatomic) NSInteger newDuplicatesCount; // ivar: _newDuplicatesCount


+(id)defaultContactFormatter;
+(id)defaultContactFormatterForDataSource:(id)arg0 ;
+(id)os_log;
-(BOOL)canMergeDuplicates;
-(BOOL)hasNewDuplicates;
-(BOOL)isBusy;
-(BOOL)isInMergeCooldown:(NSInteger)arg0 ;
-(BOOL)wantsToDisplayNewDuplicatesBanner:(NSInteger)arg0 ;
-(id)initWithDataSource:(id)arg0 environment:(id)arg1 delegate:(id)arg2 ;
-(void)decorateBannerViewCell:(id)arg0 ;
-(void)didPerformDuplicatesMerge;
-(void)didSelectIgnoreAllDuplicates:(id)arg0 signaturesIgnored:(id)arg1 ;
-(void)didSelectMergeAllDuplicates:(id)arg0 signaturesToMerge:(id)arg1 ;
-(void)didSelectUnignoreDuplicate:(id)arg0 ;
-(void)duplicatesDidChange;
-(void)findDuplicates;
-(void)ignoreNewDuplicatesBanner;
-(void)performIgnoreAll;
-(void)performMerge:(id)arg0 ;
-(void)presentDuplicatesUIFailureAlertForController:(id)arg0 ;
-(void)presentSheetBasedMergeForController:(id)arg0 showsIgnored:(BOOL)arg1 ;
-(void)refreshManagedDuplicates;
-(void)refreshManagedDuplicatesWithCompletionBlock:(id)arg0 ;
-(void)resetDuplicates;
-(void)updateDuplicatesCounts;
-(void)willPerformDuplicatesMerge;


@end


#endif