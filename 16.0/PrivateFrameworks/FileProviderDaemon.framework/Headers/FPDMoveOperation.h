// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDMOVEOPERATION_H
#define FPDMOVEOPERATION_H

@class FPMoveInfo;


#import "FPDActionOperation.h"
#import "FPDMoveReader.h"
#import "FPDMoveWriter.h"
#import "FPDActionOperationQueue.h"

@interface FPDMoveOperation : FPDActionOperation {
    FPDMoveReader *_reader;
    FPDMoveWriter *_writer;
    FPDActionOperationQueue *_queue;
}


@property (readonly, nonatomic) FPMoveInfo *info;


+(BOOL)_validateInfo:(id)arg0 ;
-(id)initWithActionInfo:(id)arg0 request:(id)arg1 server:(id)arg2 ;
-(id)moveInfo;
-(void)_t_unblockReader;
-(void)cancel;
-(void)cancelRoot:(id)arg0 ;
-(void)dumpStateTo:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)sendPastUpdatesToClient:(id)arg0 ;


@end


#endif