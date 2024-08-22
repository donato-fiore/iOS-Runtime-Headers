// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHEDGE_H
#define PGGRAPHEDGE_H

@class MAEdge, NSString;
@protocol PGGraphElement;



@interface PGGraphEdge : MAEdge <PGGraphElement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)filter;
-(BOOL)isEqualToEdge:(id)arg0 ;
-(NSUInteger)propertiesCount;
-(float)weight;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)initWithSourceNode:(id)arg0 targetNode:(id)arg1 ;
-(id)keywordDescription;
-(id)propertyForKey:(id)arg0 ;
-(void)setWeight:(float)arg0 ;


@end


#endif