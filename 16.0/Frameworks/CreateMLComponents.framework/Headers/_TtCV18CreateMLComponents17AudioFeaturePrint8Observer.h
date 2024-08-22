// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV18CREATEMLCOMPONENTS17AUDIOFEATUREPRINT8OBSERVER_H
#define _TTCV18CREATEMLCOMPONENTS17AUDIOFEATUREPRINT8OBSERVER_H

@protocol SNResultsObserving;

#import <Foundation/Foundation.h>


@interface _TtCV18CreateMLComponents17AudioFeaturePrint8Observer : NSObject <SNResultsObserving>

 {
    ? buffer;
}




-(id)init;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)requestDidComplete:(id)arg0 ;


@end


#endif