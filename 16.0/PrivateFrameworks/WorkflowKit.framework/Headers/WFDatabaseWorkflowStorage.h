// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDATABASEWORKFLOWSTORAGE_H
#define WFDATABASEWORKFLOWSTORAGE_H

@class NSString;
@protocol WFWorkflowStorage;

#import <Foundation/Foundation.h>

#import "WFDatabase.h"

@interface WFDatabaseWorkflowStorage : NSObject <WFWorkflowStorage>



@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)reloadRecord:(id)arg0 withReference:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveRecord:(id)arg0 withReference:(id)arg1 error:(*id)arg2 ;
-(id)initWithDatabase:(id)arg0 ;


@end


#endif