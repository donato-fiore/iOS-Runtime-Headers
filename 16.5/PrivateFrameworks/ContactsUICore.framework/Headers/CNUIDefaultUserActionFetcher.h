// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIDEFAULTUSERACTIONFETCHER_H
#define CNUIDEFAULTUSERACTIONFETCHER_H

@class NSString, CRRecentContactsLibrary;
@protocol CNUIDefaultUserActionFetcher;

#import <Foundation/Foundation.h>


@interface CNUIDefaultUserActionFetcher : NSObject <CNUIDefaultUserActionFetcher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CRRecentContactsLibrary *library; // ivar: _library
@property (readonly) Class superclass;


+(BOOL)doesRecentContact:(id)arg0 matchUserActionItem:(id)arg1 ;
+(id)defaultActionItemForActionItem:(id)arg0 recentContacts:(id)arg1 ;
+(id)queryForUserActionItem:(id)arg0 ;
+(id)recentContactsForUserActionItem:(id)arg0 recentsLibrary:(id)arg1 scheduler:(id)arg2 ;
-(id)defaultActionItemForActionItems:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)init;
-(id)initWithRecentsLibrary:(id)arg0 ;
-(id)observableForDefaultActionsChanged;


@end


#endif