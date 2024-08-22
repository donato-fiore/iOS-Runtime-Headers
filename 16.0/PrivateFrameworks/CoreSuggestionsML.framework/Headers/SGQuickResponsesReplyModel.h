// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGQUICKRESPONSESREPLYMODEL_H
#define SGQUICKRESPONSESREPLYMODEL_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesReplyModel : NSObject

@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) BOOL dynamicLabel; // ivar: _dynamicLabel
@property (readonly, nonatomic) CGFloat scoreWeight; // ivar: _scoreWeight
@property (readonly, nonatomic) NSArray *selectedPseudocounts; // ivar: _selectedPseudocounts
@property (readonly, nonatomic) NSUInteger semanticClassIndex; // ivar: _semanticClassIndex
@property (readonly, nonatomic) NSArray *semanticClasses; // ivar: _semanticClasses


+(id)semanticClassesForArray:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 index:(NSUInteger)arg1 ;


@end


#endif