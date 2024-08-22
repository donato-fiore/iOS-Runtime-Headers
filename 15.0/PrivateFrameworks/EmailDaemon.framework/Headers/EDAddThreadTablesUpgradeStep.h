// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDADDTHREADTABLESUPGRADESTEP_H
#define EDADDTHREADTABLESUPGRADESTEP_H

@class NSString;
@protocol EDTableUpgradeStep;

#import <Foundation/Foundation.h>


@interface EDAddThreadTablesUpgradeStep : NSObject <EDTableUpgradeStep>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_schemaWithMessagesTable:(id)arg0 mailboxesTable:(id)arg1 conversationsTable:(id)arg2 ;
+(id)threadMailboxesTableSchema;
+(id)threadRecipientsTableSchema;
+(id)threadScopesTableSchema;
+(id)threadSendersTableSchema;
+(id)threadsTableSchema;
+(int)runWithConnection:(id)arg0 ;


@end


#endif