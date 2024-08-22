// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLTRACKERMOCKADAPTER_H
#define PMLTRACKERMOCKADAPTER_H

@class NSMutableArray, NSString;
@protocol PMLTrackerAdapterProtocol;

#import <Foundation/Foundation.h>


@interface PMLTrackerMockAdapter : NSObject <PMLTrackerAdapterProtocol>

 {
    NSMutableArray *_trackedMessages;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)trackedMessagesByClass:(Class)arg0 ;
-(void)clearAllTrackedMessages;
-(void)postMetricId:(unsigned int)arg0 message:(id)arg1 ;


@end


#endif