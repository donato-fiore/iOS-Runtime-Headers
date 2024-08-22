// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNRESULTSFORWARDER_H
#define SNRESULTSFORWARDER_H

@class NSString;
@protocol SNResultsObserving;

#import <Foundation/Foundation.h>


@interface SNResultsForwarder : NSObject <SNResultsObserving>

 {
    id *_resultsHandler;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(id)initWithCompletionHandler:(id)arg0 resultsHandler:(unk)arg1  ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)requestDidComplete:(id)arg0 ;


@end


#endif