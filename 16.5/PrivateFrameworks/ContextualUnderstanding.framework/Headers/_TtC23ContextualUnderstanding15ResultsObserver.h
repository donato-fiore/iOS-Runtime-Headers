// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC23CONTEXTUALUNDERSTANDING15RESULTSOBSERVER_H
#define _TTC23CONTEXTUALUNDERSTANDING15RESULTSOBSERVER_H

@protocol SNResultsObserving;

#import <Foundation/Foundation.h>


@interface _TtC23ContextualUnderstanding15ResultsObserver : NSObject <SNResultsObserving>

 {
    ? offsetDate;
    ? foundSounds;
}




-(id)init;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)requestDidComplete:(id)arg0 ;


@end


#endif