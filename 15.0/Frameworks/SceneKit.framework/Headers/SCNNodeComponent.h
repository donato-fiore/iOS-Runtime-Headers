// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNNODECOMPONENT_H
#define SCNNODECOMPONENT_H


#import <Foundation/Foundation.h>

#import "SCNNodeComponent.h"

@interface SCNNodeComponent : NSObject

@property (retain, nonatomic) id *component; // ivar: component
@property (retain, nonatomic) SCNNodeComponent *next; // ivar: next
@property (nonatomic) NSInteger type; // ivar: type


-(id)initWithType:(NSInteger)arg0 component:(id)arg1 ;


@end


#endif