// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHNODE_H
#define PGGRAPHNODE_H

@class MANode, NSString;
@protocol PGGraphElement;



@interface PGGraphNode : MANode <PGGraphElement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)filter;
-(NSUInteger)propertiesCount;
-(id)UUID;
-(id)keywordDescription;
-(id)name;
-(id)propertyForKey:(id)arg0 ;
-(void)setWeight:(float)arg0 ;


@end


#endif