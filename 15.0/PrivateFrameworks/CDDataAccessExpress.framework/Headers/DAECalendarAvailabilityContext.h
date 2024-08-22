// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAECALENDARAVAILABILITYCONTEXT_H
#define DAECALENDARAVAILABILITYCONTEXT_H


#import <Foundation/Foundation.h>


@interface DAECalendarAvailabilityContext : NSObject {
    id *_resultsBlock;
    id *_completionBlock;
}




// -(id)initWithResultsBlock:(id)arg0 completionBlock:(unk)arg1  ;
-(void)finishedWithError:(id)arg0 ;
-(void)resultsReturned:(id)arg0 ;


@end


#endif