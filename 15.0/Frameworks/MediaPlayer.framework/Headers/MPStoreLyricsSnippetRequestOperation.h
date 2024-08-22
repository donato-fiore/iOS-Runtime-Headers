// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTORELYRICSSNIPPETREQUESTOPERATION_H
#define MPSTORELYRICSSNIPPETREQUESTOPERATION_H



#import "MPAsyncOperation.h"
#import "MPStoreLyricsSnippetURLComponents.h"

@interface MPStoreLyricsSnippetRequestOperation : MPAsyncOperation

@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) MPStoreLyricsSnippetURLComponents *snippetURL; // ivar: _snippetURL


-(void)execute;
-(void)finishWithError:(id)arg0 ;


@end


#endif