// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDATABASEWORKFLOWSTORAGE_H
#define WFDATABASEWORKFLOWSTORAGE_H

@class NSString;
@protocol WFWorkflowStorage;

#import <Foundation/Foundation.h>

#import "WFDatabase.h"
#import "WFWorkflowReference.h"

@interface WFDatabaseWorkflowStorage : NSObject <WFWorkflowStorage>



@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFWorkflowReference *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)reloadRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveRecord:(id)arg0 error:(*id)arg1 ;
-(id)initWithDescriptor:(id)arg0 database:(id)arg1 ;
-(id)reference;


@end


#endif