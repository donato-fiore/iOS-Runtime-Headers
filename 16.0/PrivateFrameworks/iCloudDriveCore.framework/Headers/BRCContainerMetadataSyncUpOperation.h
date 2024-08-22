// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCCONTAINERMETADATASYNCUPOPERATION_H
#define BRCCONTAINERMETADATASYNCUPOPERATION_H

@class BRCOperation, NSString;
@protocol BRCOperationSubclass;



@interface BRCContainerMetadataSyncUpOperation : BRCOperation <BRCOperationSubclass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldPerformAnotherBatch; // ivar: _shouldPerformAnotherBatch
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithSession:(id)arg0 ;
-(void)main;
-(void)performAfterSavingRecords:(id)arg0 ;


@end


#endif