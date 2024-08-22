// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASFOLDERLOCALUPDATETASK_H
#define ASFOLDERLOCALUPDATETASK_H

@class NSString;


#import "ASTask.h"
#import "ASFolder.h"

@interface ASFolderLocalUpdateTask : ASTask {
    NSString *_previousSyncKey;
    ASFolder *_folder;
    int _commandCode;
    int _requestType;
    id *_completionBlock;
}


@property (nonatomic) NSInteger dataclasses; // ivar: _dataclasses


+(id)taskWithFolder:(id)arg0 previousSyncKey:(id)arg1 completionBlock:(id)arg2 ;
-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(id)initWithFolder:(id)arg0 previousSyncKey:(id)arg1 completionBlock:(id)arg2 ;
-(id)requestBody;
-(int)commandCode;
-(void)_appendRequestBodyFolderDataToWBXMLData:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif