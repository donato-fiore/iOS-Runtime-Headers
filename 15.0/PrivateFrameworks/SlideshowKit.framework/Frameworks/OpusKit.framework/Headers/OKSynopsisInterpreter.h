// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKSYNOPSISINTERPRETER_H
#define OKSYNOPSISINTERPRETER_H

@class NSMutableDictionary, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface OKSynopsisInterpreter : NSObject {
    NSMutableDictionary *_objectCreators;
    NSMutableDictionary *_objectComparators;
    NSMutableArray *_guidelineItems;
}


@property (retain, nonatomic) NSArray *synopsis; // ivar: _synopsis


-(BOOL)hasSynopsis;
-(id)allGuidelineSynopsisItems;
-(id)allObjectsFromGuidelineSynopsisItems;
-(id)guidelineSynopsisItemFromObjectView:(id)arg0 ;
-(id)guidelineSynopsisItemsFromObjectViews:(id)arg0 ;
-(id)initWithSynopsis:(id)arg0 ;
-(id)objectViewFromGuidelineSynopsisItem:(id)arg0 ;
-(id)objectViewsFromGuidelineSynopsisItems:(id)arg0 ;
-(void)dealloc;
-(void)registerComparatorForItemType:(NSUInteger)arg0 compareBlock:(id)arg1 ;
-(void)registerCreatorForItemType:(NSUInteger)arg0 initBlock:(id)arg1 ;


@end


#endif