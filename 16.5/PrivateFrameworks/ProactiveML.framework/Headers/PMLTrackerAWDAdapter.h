// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLTRACKERAWDADAPTER_H
#define PMLTRACKERAWDADAPTER_H

@class NSString;
@protocol PMLTrackerAdapterProtocol;

#import <Foundation/Foundation.h>


@interface PMLTrackerAWDAdapter : NSObject <PMLTrackerAdapterProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)postMetricId:(unsigned int)arg0 message:(id)arg1 ;


@end


#endif