// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFLUPDATECONFIGURATION_H
#define PFLUPDATECONFIGURATION_H

@class NSString, NSArray, MLModelConfiguration;

#import <Foundation/Foundation.h>


@interface PFLUpdateConfiguration : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *layerNames; // ivar: _layerNames
@property (readonly, nonatomic) MLModelConfiguration *modelConfiguration; // ivar: _modelConfiguration
@property (readonly, nonatomic) NSUInteger normBinCount; // ivar: _normBinCount
@property (readonly, nonatomic) CGFloat normMax; // ivar: _normMax


-(id)initWithIdentifier:(id)arg0 layerNames:(id)arg1 normMax:(CGFloat)arg2 normBinCount:(NSUInteger)arg3 modelConfiguration:(id)arg4 ;


@end


#endif