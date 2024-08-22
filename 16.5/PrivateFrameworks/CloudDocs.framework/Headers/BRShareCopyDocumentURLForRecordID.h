// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRSHARECOPYDOCUMENTURLFORRECORDID_H
#define BRSHARECOPYDOCUMENTURLFORRECORDID_H

@class CKRecordID;


#import "BRShareOperation.h"

@interface BRShareCopyDocumentURLForRecordID : BRShareOperation {
    CKRecordID *_recordID;
    BOOL _withServerLookup;
}


@property (copy) id *copyDocumentURLCompletionBlock; // ivar: _copyDocumentURLCompletionBlock


-(id)initWithRecordID:(id)arg0 fileURL:(id)arg1 withServerLookup:(BOOL)arg2 ;
-(id)initWithRecordID:(id)arg0 withServerLookup:(BOOL)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif