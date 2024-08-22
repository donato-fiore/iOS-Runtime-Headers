// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPUBLICEVENTLOCALIZEDCATEGORYNODE_H
#define PGGRAPHPUBLICEVENTLOCALIZEDCATEGORYNODE_H

@class NSString;


#import "PGGraphOptimizedNode.h"

@interface PGGraphPublicEventLocalizedCategoryNode : PGGraphOptimizedNode {
    NSString *_label;
}


@property (readonly) NSUInteger level; // ivar: _level


-(BOOL)hasProperties:(id)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLabel:(id)arg0 level:(NSUInteger)arg1 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif