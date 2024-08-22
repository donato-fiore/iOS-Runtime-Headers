// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHNAMEDLOCATIONNODE_H
#define PGGRAPHNAMEDLOCATIONNODE_H

@class NSString, MANodeFilter;
@protocol MAUniquelyIdentifiableNode;


#import "PGGraphLocationNode.h"

@interface PGGraphNamedLocationNode : PGGraphLocationNode <MAUniquelyIdentifiableNode>



@property (readonly, nonatomic) NSString *UUID; // ivar: _uuid
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;


+(id)filter;
+(id)filterBySettingNameNotEmptyPropertyOnFilter:(id)arg0 ;
+(id)filterWithName:(id)arg0 ;
+(id)filterWithUUID:(id)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)description;
-(id)featureIdentifier;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 ;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif