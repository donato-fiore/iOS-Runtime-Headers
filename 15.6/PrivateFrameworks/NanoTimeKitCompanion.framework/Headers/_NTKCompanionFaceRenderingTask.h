// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKCOMPANIONFACERENDERINGTASK_H
#define _NTKCOMPANIONFACERENDERINGTASK_H


#import <Foundation/Foundation.h>

#import "NTKFace.h"

@interface _NTKCompanionFaceRenderingTask : NSObject

@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSInteger detailMode; // ivar: _detailMode
@property (readonly, nonatomic) NTKFace *face; // ivar: _face
@property (readonly, nonatomic, getter=isMemberOfBatch) BOOL memberOfBatch;


-(id)initWithFace:(id)arg0 detailMode:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif