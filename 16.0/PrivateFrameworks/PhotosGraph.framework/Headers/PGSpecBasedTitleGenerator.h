// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSPECBASEDTITLEGENERATOR_H
#define PGSPECBASEDTITLEGENERATOR_H

@class NSString, NSSet;
@protocol PGTitleSpecDelegate, PGSpecBasedTitleGeneratorDelegate;

#import <Foundation/Foundation.h>

#import "PGTitleGenerationContext.h"
#import "PGTitleSpecCollection.h"
#import "PGTitle.h"

@interface PGSpecBasedTitleGenerator : NSObject <PGTitleSpecDelegate>

 {
    PGTitleGenerationContext *_titleGenerationContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PGSpecBasedTitleGeneratorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lineBreakBehavior; // ivar: _lineBreakBehavior
@property (retain, nonatomic) NSSet *momentNodes; // ivar: _momentNodes
@property (retain, nonatomic) PGTitleSpecCollection *specCollection; // ivar: _specCollection
@property (readonly) Class superclass;
@property (readonly, nonatomic) PGTitle *title; // ivar: _title


-(id)_titleFromSpecs:(id)arg0 ;
-(id)initWithMomentNodes:(id)arg0 features:(id)arg1 meaningLabel:(id)arg2 isAggregation:(BOOL)arg3 titleGenerationContext:(id)arg4 ;
-(id)initWithMomentNodes:(id)arg0 features:(id)arg1 specCollection:(id)arg2 titleGenerationContext:(id)arg3 ;
-(id)initWithMomentNodes:(id)arg0 meaningLabel:(id)arg1 titleGenerationContext:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg0 memoryCategory:(NSUInteger)arg1 subcategory:(NSUInteger)arg2 titleGenerationContext:(id)arg3 ;
-(id)initWithMomentNodes:(id)arg0 personNodes:(id)arg1 memoryCategory:(NSUInteger)arg2 subcategory:(NSUInteger)arg3 titleGenerationContext:(id)arg4 ;
-(id)initWithMomentNodes:(id)arg0 specCollection:(id)arg1 titleGenerationContext:(id)arg2 ;
-(id)titleSpec:(id)arg0 inputForArgument:(id)arg1 ;


@end


#endif