// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBFACCUMULATINGOBSERVER_H
#define _SBFACCUMULATINGOBSERVER_H

@class NSMutableArray, NSError, NSString;
@protocol SBFObserver, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface _SBFAccumulatingObserver : NSObject <SBFObserver>

 {
    NSMutableArray *_results;
    NSError *_error;
    BOOL _didComplete;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)waitForResults:(*id)arg0 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif