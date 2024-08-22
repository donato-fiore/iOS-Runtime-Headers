// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSMARTMAILTASK_H
#define ASSMARTMAILTASK_H

@class NSString;


#import "ASSendMailTask.h"

@interface ASSmartMailTask : ASSendMailTask {
    int _messageType;
    NSString *_originalMessageId;
    NSString *_instanceId;
    NSString *_originalFolderId;
    NSString *_originalLongId;
    BOOL _retryWithoutReferences;
    BOOL _replaceMime;
}


@property (nonatomic) BOOL shouldNotRetry; // ivar: _shouldNotRetry


-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(id)command;
-(id)contentType;
-(id)initWithMessage:(id)arg0 messageID:(id)arg1 messageType:(int)arg2 originalMessageID:(id)arg3 instanceId:(id)arg4 originalFolderID:(id)arg5 originalLongID:(id)arg6 replaceMime:(BOOL)arg7 ;
-(id)parameterData;
-(id)requestBodyStreamOutKnownSize:(*int)arg0 ;
-(int)commandCode;
-(void)handleTopLevelErrorStatus:(id)arg0 ;


@end


#endif