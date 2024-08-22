// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(NSUInteger)propertiesCount;
-(id)keywordDescription;
-(id)propertyForKey:(id)arg0 ;
-(void)setWeight:(float)arg0 ;


@end


#endif