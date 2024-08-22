// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASFOLDERDELETETASK_H
#define ASFOLDERDELETETASK_H



#import "ASFolderLocalUpdateTask.h"

@interface ASFolderDeleteTask : ASFolderLocalUpdateTask



-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)initWithFolder:(id)arg0 previousSyncKey:(id)arg1 completionBlock:(id)arg2 ;
-(void)_appendRequestBodyFolderDataToWBXMLData:(id)arg0 ;


@end


#endif