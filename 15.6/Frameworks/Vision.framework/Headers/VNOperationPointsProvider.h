// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNOPERATIONPOINTSPROVIDER_H
#define VNOPERATIONPOINTSPROVIDER_H

@protocol VNOperationPointsProviding;

#import <Foundation/Foundation.h>

#import "VNOperationPoints.h"

@interface VNOperationPointsProvider : NSObject <VNOperationPointsProviding>

 {
    VNOperationPoints *_operationPoints;
}




-(id)initWithOperationPoints:(id)arg0 ;
-(id)operationPointsAndReturnError:(*id)arg0 ;


@end


#endif