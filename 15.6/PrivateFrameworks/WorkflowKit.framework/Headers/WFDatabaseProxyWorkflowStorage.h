// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDATABASEPROXYWORKFLOWSTORAGE_H
#define WFDATABASEPROXYWORKFLOWSTORAGE_H

@class NSString;
@protocol WFWorkflowStorage;

#import <Foundation/Foundation.h>

#import "WFDatabaseProxy.h"
#import "WFWorkflowReference.h"

@interface WFDatabaseProxyWorkflowStorage : NSObject <WFWorkflowStorage>



@property (readonly, nonatomic) WFDatabaseProxy *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFWorkflowReference *reference; // ivar: _reference
@property (readonly) Class superclass;


-(BOOL)reloadRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveRecord:(id)arg0 error:(*id)arg1 ;
-(id)initWithReference:(id)arg0 database:(id)arg1 ;


@end


#endif