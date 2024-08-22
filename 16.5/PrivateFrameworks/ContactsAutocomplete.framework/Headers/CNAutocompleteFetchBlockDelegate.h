// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETEFETCHBLOCKDELEGATE_H
#define CNAUTOCOMPLETEFETCHBLOCKDELEGATE_H

@class NSString;
@protocol CNAutocompleteFetchDelegate;

#import <Foundation/Foundation.h>


@interface CNAutocompleteFetchBlockDelegate : NSObject <CNAutocompleteFetchDelegate>



@property (copy) id *adjustmentHandler; // ivar: _adjustmentHandler
@property (copy) id *beganNetworkActivityHandler; // ivar: _beganNetworkActivityHandler
@property (copy) id *comparatorHandler; // ivar: _comparatorHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *endedNetworkActivityHandler; // ivar: _endedNetworkActivityHandler
@property (copy) id *errorHandler; // ivar: _errorHandler
@property (copy) id *finishHandler; // ivar: _finishHandler
@property (readonly) NSUInteger hash;
@property (copy) id *resultHandler; // ivar: _resultHandler
@property (readonly) Class superclass;
@property (copy) id *supplementalResultHandler; // ivar: _supplementalResultHandler
@property (copy) id *willSortHandler; // ivar: _willSortHandler


-(BOOL)autocompleteFetch:(id)arg0 shouldExpectSupplementalResultsForRequest:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)autocompleteFetch:(id)arg0 willAdjustResults:(id)arg1 ;
-(id)resultComparatorForAutocompleteFetch:(SEL)arg0 ;
-(void)autocompleteFetch:(id)arg0 didFailWithError:(id)arg1 ;
-(void)autocompleteFetch:(id)arg0 didReceiveResults:(id)arg1 ;
-(void)autocompleteFetch:(id)arg0 willSortResults:(id)arg1 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg0 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg0 ;
-(void)autocompleteFetchDidFinish:(id)arg0 ;


@end


#endif