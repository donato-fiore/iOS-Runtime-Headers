// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASFOLDERCREATETASK_H
#define ASFOLDERCREATETASK_H



#import "ASFolderLocalUpdateTask.h"

@interface ASFolderCreateTask : ASFolderLocalUpdateTask



-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)initWithFolder:(id)arg0 previousSyncKey:(id)arg1 completionBlock:(id)arg2 ;
-(void)_appendRequestBodyFolderDataToWBXMLData:(id)arg0 ;


@end


#endif