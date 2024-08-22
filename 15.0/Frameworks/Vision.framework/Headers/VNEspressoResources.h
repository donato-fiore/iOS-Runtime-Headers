// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNESPRESSORESOURCES_H
#define VNESPRESSORESOURCES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VNEspressoResources : NSObject

@property (readonly) *void context; // ivar: _context
@property (readonly) NSString *modelName; // ivar: _modelName
@property (readonly) ? network; // ivar: _network
@property (readonly) NSString *networkConfigurationName; // ivar: _networkConfigurationName
@property (readonly) *void plan; // ivar: _plan


-(id)description;
-(id)initWithModelName:(id)arg0 networkConfigurationName:(id)arg1 network:(struct ? )arg2 plan:(*void)arg3 context:(*void)arg4 ;
-(void)dealloc;
-(void)free;


@end


#endif