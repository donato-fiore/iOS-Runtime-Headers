// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLTRACKERPARSECADAPTER_H
#define PMLTRACKERPARSECADAPTER_H

@class NSString;
@protocol PMLTrackerAdapterProtocol;

#import <Foundation/Foundation.h>


@interface PMLTrackerParsecAdapter : NSObject <PMLTrackerAdapterProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_writeDataForTransparency:(id)arg0 ;
+(id)wrappedMessage:(id)arg0 ;
-(void)postMetricId:(unsigned int)arg0 message:(id)arg1 ;


@end


#endif