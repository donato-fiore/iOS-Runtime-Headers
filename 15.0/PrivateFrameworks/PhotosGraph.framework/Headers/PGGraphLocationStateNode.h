// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHLOCATIONSTATENODE_H
#define PGGRAPHLOCATIONSTATENODE_H



#import "PGGraphNamedLocationNode.h"
#import "PGGraphLocationStateNodeCollection.h"

@interface PGGraphLocationStateNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationStateNodeCollection *collection;


+(id)addressOfState;
+(id)countryOfState;
+(id)filter;
+(id)momentOfState;
-(NSUInteger)featureType;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;


@end


#endif