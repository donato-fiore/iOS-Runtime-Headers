// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHBABYNODE_H
#define PGGRAPHBABYNODE_H

@class NSString;


#import "PGGraphOptimizedNode.h"
#import "PGGraphBabyNodeCollection.h"

@interface PGGraphBabyNode : PGGraphOptimizedNode {
    NSString *_uuid;
}


@property (readonly, nonatomic) PGGraphBabyNodeCollection *collection;


+(id)caretakerOfBaby;
+(id)filter;
+(id)momentOfBaby;
-(BOOL)hasProperties:(id)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithUUID:(id)arg0 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif