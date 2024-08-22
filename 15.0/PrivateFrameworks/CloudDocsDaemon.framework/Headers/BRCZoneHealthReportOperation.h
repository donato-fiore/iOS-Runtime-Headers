// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCZONEHEALTHREPORTOPERATION_H
#define BRCZONEHEALTHREPORTOPERATION_H

@class BRCOperation, NSString;
@protocol BRCOperationSubclass;


#import "BRCAccountSession.h"

@interface BRCZoneHealthReportOperation : BRCOperation <BRCOperationSubclass>

 {
    BOOL shouldPerformAnotherBatch;
    BRCAccountSession *_session;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldPerformAnotherBatch;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(void)_reportRecords:(id)arg0 requestID:(NSUInteger)arg1 ;
-(void)main;


@end


#endif