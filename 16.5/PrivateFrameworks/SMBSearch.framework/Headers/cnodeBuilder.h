// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNODEBUILDER_H
#define CNODEBUILDER_H


#import <Foundation/Foundation.h>

#import "cNodeRestriction.h"

@interface cnodeBuilder : NSObject

@property (retain) cNodeRestriction *rootNode; // ivar: _rootNode
@property unsigned int ulType; // ivar: _ulType
@property unsigned int weight; // ivar: _weight


-(id)initWithType:(unsigned int)arg0 Weight:(unsigned int)arg1 ;
-(int)appendRestriction:(id)arg0 ;


@end


#endif