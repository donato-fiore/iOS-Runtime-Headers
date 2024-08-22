// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKREVIEWLARGEUNSYNCEDCONVERSATIONSVIEWCONTROLLER_H
#define CKREVIEWLARGEUNSYNCEDCONVERSATIONSVIEWCONTROLLER_H

@class NSArray;
@protocol IMDaemonMultiplexedConnectionManaging;


#import "CKAbstractReviewViewController.h"

@interface CKReviewLargeUnsyncedConversationsViewController : CKAbstractReviewViewController

@property (retain, nonatomic) NSArray *conversations; // ivar: _conversations
@property (retain, nonatomic) NSObject<IMDaemonMultiplexedConnectionManaging> *daemonConnection; // ivar: _daemonConnection


-(Class)tableViewCellClass;
-(NSUInteger)numberOfModelObjects;
-(id)modelObjectAtIndex:(NSUInteger)arg0 ;
-(id)navigationBarTitle;
-(id)tableViewCellReuseIdentifier;
-(void)_populateConversationsIfNeeded;
-(void)dealloc;
-(void)deleteModelObjectAndUnderlyingData:(id)arg0 ;
-(void)didSelectModelObjectAtIndex:(NSUInteger)arg0 ;
-(void)reloadModelData;


@end


#endif