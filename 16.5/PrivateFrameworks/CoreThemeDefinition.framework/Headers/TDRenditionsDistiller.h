// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDRENDITIONSDISTILLER_H
#define TDRENDITIONSDISTILLER_H

@class NSMutableArray, NSConditionLock;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CoreThemeDocument.h"
#import "TDLogger.h"

@interface TDRenditionsDistiller : NSObject {
    CoreThemeDocument *document;
    NSMutableArray *renditionInQueue;
    NSMutableArray *csiDataInfoOutQueue;
    NSConditionLock *inQueueLock;
    NSConditionLock *outQueueLock;
    BOOL shouldCompressCSIDataFlag;
    BOOL noMoreCSIDataInfo;
    BOOL noMoreRenditions;
    NSObject<OS_dispatch_group> *_group;
}


@property (retain) TDLogger *logger; // ivar: _logger


-(id)_nextObjectFromInQueue;
-(id)initWithDocument:(id)arg0 shouldCompressCSIDataFlag:(BOOL)arg1 ;
-(id)nextCSIDataInfoFromQueue;
-(void)_distill:(id)arg0 ;
-(void)_enqueueCSIDataInfo:(id)arg0 ;
-(void)_enqueueDistillingAbortedInfo;
-(void)_enqueueLastCSIDataInfoFlag;
-(void)_enqueueOnInQueueTheObject:(id)arg0 ;
-(void)_enqueueOnOutQueueTheObject:(id)arg0 ;
-(void)_enqueueOnQueue:(id)arg0 withQueueLock:(id)arg1 object:(id)arg2 ;
-(void)dealloc;
-(void)detachDistillationThread;
-(void)enqueueAbortFlag;
-(void)enqueueLastRenditionFlag;
-(void)enqueueRenditionSpec:(id)arg0 ;
-(void)waitUntilFinished;


@end


#endif