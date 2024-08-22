// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSDRESULTSCOLLECTOR_H
#define AXSDRESULTSCOLLECTOR_H

@class NSMutableArray, NSError, NSString, NSArray;
@protocol AXSDDetectorManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXSDResultsCollector : NSObject <AXSDDetectorManagerDelegate>

 {
    NSMutableArray *_results;
    BOOL _didFinish;
    NSError *_error;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL didFinish;
@property (readonly) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *results;
@property (readonly) Class superclass;


-(id)init;
-(void)receivedCompletion:(id)arg0 ;
-(void)receivedError:(id)arg0 fromDetector:(id)arg1 ;
-(void)receivedObservation:(id)arg0 forDetector:(id)arg1 ;


@end


#endif