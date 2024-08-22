// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESECALENDARAVAILABILITYCONTEXT_H
#define ESECALENDARAVAILABILITYCONTEXT_H


#import <Foundation/Foundation.h>


@interface ESECalendarAvailabilityContext : NSObject {
    id *_resultsBlock;
    id *_completionBlock;
}




// -(id)initWithResultsBlock:(id)arg0 completionBlock:(unk)arg1  ;
-(void)finishedWithError:(id)arg0 ;
-(void)resultsReturned:(id)arg0 ;


@end


#endif