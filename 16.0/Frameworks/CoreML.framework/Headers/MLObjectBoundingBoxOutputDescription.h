// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLOBJECTBOUNDINGBOXOUTPUTDESCRIPTION_H
#define MLOBJECTBOUNDINGBOXOUTPUTDESCRIPTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface MLObjectBoundingBoxOutputDescription : NSObject

@property (retain) NSString *confidenceFeatureName; // ivar: _confidenceFeatureName
@property (retain) NSString *coordinatesFeatureName; // ivar: _coordinatesFeatureName
@property int format; // ivar: _format
@property (retain) NSArray *labelNames; // ivar: _labelNames




@end


#endif