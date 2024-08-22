// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFETCHBOOKSOPERATION_H
#define CRKFETCHBOOKSOPERATION_H

@class CATOperation, NSMutableArray;



@interface CRKFetchBooksOperation : CATOperation {
    id *mBookLibraryProxy;
    NSMutableArray *mBooks;
    BOOL mIncludeImages;
}




-(BOOL)isAsynchronous;
-(id)initWithBookLibraryProxy:(id)arg0 ;
// -(id)initWithBookLibraryProxy:(id)arg0 includeImages:(unk)arg1  ;
// -(id)initWithBookLibraryProxy:(id)arg0 request:(unk)arg1 error:(id)arg2  ;
-(void)main;
-(void)parseBookMetadataOperationDidFail:(id)arg0 ;
-(void)parsePDFMetadataOperationDidFail:(id)arg0 ;


@end


#endif