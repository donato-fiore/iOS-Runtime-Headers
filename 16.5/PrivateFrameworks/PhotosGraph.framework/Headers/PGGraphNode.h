// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(BOOL)isEqualToNode:(id)arg0 ;
-(NSUInteger)propertiesCount;
-(float)weight;
-(id)UUID;
-(id)init;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)keywordDescription;
-(id)name;
-(id)propertyForKey:(id)arg0 ;
-(id)shortDescription;
-(void)setWeight:(float)arg0 ;


@end


#endif