// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARDEPTHMAPDATA_H
#define ARDEPTHMAPDATA_H

@class NSString;
@protocol ARResultData;

#import <Foundation/Foundation.h>


@interface ARDepthMapData : NSObject <ARResultData>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) *CGImage depthMap; // ivar: _depthMap
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif