// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAECALENDARDIRECTORYSEARCHCONTEXT_H
#define DAECALENDARDIRECTORYSEARCHCONTEXT_H


#import <Foundation/Foundation.h>


@interface DAECalendarDirectorySearchContext : NSObject {
    id *_resultsBlock;
    id *_completionBlock;
}




// -(id)initWithResultsBlock:(id)arg0 completionBlock:(unk)arg1  ;
-(void)finishedWithError:(id)arg0 exceededResultLimit:(BOOL)arg1 ;
-(void)resultsReturned:(id)arg0 ;


@end


#endif