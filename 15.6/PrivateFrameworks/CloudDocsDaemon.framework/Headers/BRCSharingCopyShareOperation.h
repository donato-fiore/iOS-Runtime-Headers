// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSHARINGCOPYSHAREOPERATION_H
#define BRCSHARINGCOPYSHAREOPERATION_H

@class BRCFrameworkOperation, NSString, CKRecordID;
@protocol BRCOperationSubclass;


#import "BRCClientZone.h"
#import "BRCItemID.h"

@interface BRCSharingCopyShareOperation : BRCFrameworkOperation <BRCOperationSubclass>



@property (retain, nonatomic) BRCClientZone *clientZone; // ivar: _clientZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKRecordID *recordIDNeedingFetch; // ivar: _recordIDNeedingFetch
@property (retain, nonatomic) BRCItemID *rootItemIDToLookup; // ivar: _rootItemIDToLookup
@property (retain, nonatomic) CKRecordID *shareID; // ivar: _shareID
@property (readonly) Class superclass;


-(id)createActivity;
-(id)initWithItem:(id)arg0 ;
-(void)fetchRootURLIfNecessaryAndFinishWithShare:(id)arg0 ;
-(void)main;


@end


#endif