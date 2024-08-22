// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSKSCENESPECIFICATION_H
#define PSKSCENESPECIFICATION_H

@class UVAgentSceneSpecification;

#import <Foundation/Foundation.h>


@interface PSKSceneSpecification : NSObject

@property (readonly, nonatomic) UVAgentSceneSpecification *specification; // ivar: _specification


+(id)mainSceneSpecification;
+(id)previewSceneSpecification;
-(id)initWithSpecification:(id)arg0 ;


@end


#endif