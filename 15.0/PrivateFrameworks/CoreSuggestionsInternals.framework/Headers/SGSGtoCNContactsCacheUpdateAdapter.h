// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSGTOCNCONTACTSCACHEUPDATEADAPTER_H
#define SGSGTOCNCONTACTSCACHEUPDATEADAPTER_H

@class NSString;
@protocol SGJournalContactsObserver;

#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"

@interface SGSGtoCNContactsCacheUpdateAdapter : NSObject <SGJournalContactsObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SGSqlEntityStore *store; // ivar: _store
@property (readonly) Class superclass;


-(id)initWithSGSqlEntityStore:(id)arg0 ;
-(void)addContact:(id)arg0 ;
-(void)confirmContact:(id)arg0 ;
-(void)rejectContact:(id)arg0 ;
-(void)removeAllStoredPseudoContacts;


@end


#endif