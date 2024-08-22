// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCFETCHIWORKSHARINGINFOOPERATION_H
#define BRCFETCHIWORKSHARINGINFOOPERATION_H

@class BRCOperation, NSString, CKRecordID;
@protocol BRCOperationSubclass;



@interface BRCFetchiWorkSharingInfoOperation : BRCOperation <BRCOperationSubclass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithDocumentItem:(id)arg0 ;
-(void)main;


@end


#endif