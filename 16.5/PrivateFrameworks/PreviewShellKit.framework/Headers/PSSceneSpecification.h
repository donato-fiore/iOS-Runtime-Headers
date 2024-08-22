// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSCENESPECIFICATION_H
#define PSSCENESPECIFICATION_H

@class UVAgentSceneSpecification;

#import <Foundation/Foundation.h>


@interface PSSceneSpecification : NSObject

@property (readonly, nonatomic) UVAgentSceneSpecification *specification; // ivar: _specification


+(id)mainSceneSpecification;
+(id)previewSceneSpecification;
-(id)initWithSpecification:(id)arg0 ;


@end


#endif