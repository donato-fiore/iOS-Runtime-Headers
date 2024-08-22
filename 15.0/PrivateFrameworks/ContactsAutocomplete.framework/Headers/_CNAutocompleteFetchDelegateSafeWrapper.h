// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNAUTOCOMPLETEFETCHDELEGATESAFEWRAPPER_H
#define _CNAUTOCOMPLETEFETCHDELEGATESAFEWRAPPER_H

@class NSString;
@protocol CNAutocompleteFetchDelegate;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteFetchDelegateSafeWrapper : NSObject <CNAutocompleteFetchDelegate>

 {
    id<CNAutocompleteFetchDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)autocompleteFetch:(id)arg0 shouldExpectSupplementalResultsForRequest:(id)arg1 completionHandler:(id)arg2 ;
-(id)autocompleteFetch:(id)arg0 willAdjustResults:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)resultComparatorForAutocompleteFetch:(SEL)arg0 ;
-(void)autocompleteFetch:(id)arg0 didFailWithError:(id)arg1 ;
-(void)autocompleteFetch:(id)arg0 didReceiveResults:(id)arg1 ;
-(void)autocompleteFetch:(id)arg0 willSortResults:(id)arg1 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg0 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg0 ;
-(void)autocompleteFetchDidFinish:(id)arg0 ;


@end


#endif