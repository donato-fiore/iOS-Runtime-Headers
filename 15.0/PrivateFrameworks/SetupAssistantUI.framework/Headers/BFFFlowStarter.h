// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BFFFLOWSTARTER_H
#define BFFFLOWSTARTER_H

@protocol BFFFlowDiverter;

#import <Foundation/Foundation.h>


@interface BFFFlowStarter : NSObject

@property (retain, nonatomic) NSObject<BFFFlowDiverter> *diverter; // ivar: _diverter


-(BOOL)controllerNeedsToRunForClass:(Class)arg0 ;
-(BOOL)controllerNeedsToRunForFlowItem:(id)arg0 ;
-(id)initWithFlowDiverter:(id)arg0 ;


@end


#endif