// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFSUBJECT_H
#define SBFSUBJECT_H

@class NSMutableArray, NSString;
@protocol SBFObserver;


#import "SBFObservable.h"

@interface SBFSubject : SBFObservable <SBFObserver>

 {
    NSMutableArray *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_observers;
-(id)init;
-(id)subscribe:(id)arg0 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif