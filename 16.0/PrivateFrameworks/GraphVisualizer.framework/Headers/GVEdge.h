// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GVEDGE_H
#define GVEDGE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "GVNode.h"

@interface GVEdge : NSObject

@property (retain, nonatomic) NSMutableArray *dummies; // ivar: dummies
@property (readonly, nonatomic) GVNode *from; // ivar: from
@property (nonatomic) BOOL reversed; // ivar: reversed
@property (readonly, nonatomic) GVNode *to; // ivar: to


-(id)description;
-(id)init;
-(id)initWithFromNode:(id)arg0 to:(id)arg1 ;
-(void)dealloc;


@end


#endif