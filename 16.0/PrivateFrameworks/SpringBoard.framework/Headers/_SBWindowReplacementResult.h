// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBWINDOWREPLACEMENTRESULT_H
#define _SBWINDOWREPLACEMENTRESULT_H


#import <Foundation/Foundation.h>

#import "SBWorkspaceEntity.h"
#import "SBLayoutElement.h"

@interface _SBWindowReplacementResult : NSObject

@property (retain, nonatomic) SBWorkspaceEntity *activatingEntity; // ivar: _activatingEntity
@property (retain, nonatomic) SBLayoutElement *primaryElement; // ivar: _primaryElement
@property (nonatomic) NSInteger requestedUnlockedEnvironmentMode; // ivar: _requestedUnlockedEnvironmentMode
@property (retain, nonatomic) SBLayoutElement *sideElement; // ivar: _sideElement




@end


#endif