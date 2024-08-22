// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHLANGUAGENODE_H
#define PGGRAPHLANGUAGENODE_H

@class NSString;


#import "PGGraphOptimizedNode.h"

@interface PGGraphLanguageNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier


+(id)filter;
+(id)filterWithLocaleIdentifiers:(id)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)label;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(unsigned short)domain;


@end


#endif