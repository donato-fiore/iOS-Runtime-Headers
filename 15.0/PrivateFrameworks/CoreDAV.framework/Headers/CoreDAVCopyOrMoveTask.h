// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVCOPYORMOVETASK_H
#define COREDAVCOPYORMOVETASK_H

@class NSURL;


#import "CoreDAVTask.h"

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
    BOOL _shouldSendOrder;
}


@property (retain, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (nonatomic) int overwrite; // ivar: _overwrite
@property (retain, nonatomic) NSURL *priorOrderedURL; // ivar: _priorOrderedURL


+(id)stringFromOverwriteValue:(int)arg0 ;
-(id)additionalHeaderValues;
-(id)description;
-(id)initWithSourceURL:(id)arg0 destinationURL:(id)arg1 ;
-(id)initWithSourceURL:(id)arg0 destinationURL:(id)arg1 andOverwrite:(int)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(id)requestBody;
-(void)_callBackToDelegateWithResponses:(id)arg0 error:(id)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif