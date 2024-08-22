// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDREMOVEUNUSEDSCHEMATABLEUPGRADESTEP_H
#define EDREMOVEUNUSEDSCHEMATABLEUPGRADESTEP_H

@class NSString;
@protocol EFLoggable, EDTableUpgradeStep;

#import <Foundation/Foundation.h>


@interface EDRemoveUnusedSchemaTableUpgradeStep : NSObject <EFLoggable, EDTableUpgradeStep>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(int)_copyMessagesData:(id)arg0 ;
+(int)_createTempMessagesTable:(id)arg0 ;
+(int)_dropTable:(id)arg0 connection:(id)arg1 ;
+(int)_dropThreadCategoriesIndex:(id)arg0 ;
+(int)_recreateMessagesIndices:(id)arg0 ;
+(int)_recreateThreadsIndices:(id)arg0 ;
+(int)_recreateThreadsTable:(id)arg0 ;
+(int)_swapMessagesTables:(id)arg0 ;
+(int)_truncateTable:(id)arg0 connection:(id)arg1 ;
+(int)runWithConnection:(id)arg0 ;


@end


#endif