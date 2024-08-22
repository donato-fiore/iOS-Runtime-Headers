// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POXSCHOICEDEFINITION_H
#define POXSCHOICEDEFINITION_H

@class NSMapTable, NSArray;


#import "POXSDefinition.h"

@interface POXSChoiceDefinition : POXSDefinition {
    NSMapTable *_elements;
}


@property (readonly, copy, nonatomic) NSArray *elements;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)elementForValue:(id)arg0 ;
-(id)init;
-(void)setName:(id)arg0 namespaceURI:(id)arg1 forType:(Class)arg2 ;


@end


#endif