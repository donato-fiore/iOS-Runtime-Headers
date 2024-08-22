// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSFASTSCROLLINGINDEXBARENTRYTRIMMER_H
#define _UIFOCUSFASTSCROLLINGINDEXBARENTRYTRIMMER_H

@class NSArray;
@protocol _UIFocusFastScrollingIndexBarEntryTrimmerDelegate;

#import <Foundation/Foundation.h>


@interface _UIFocusFastScrollingIndexBarEntryTrimmer : NSObject

@property (copy, nonatomic) NSArray *allEntries; // ivar: _allEntries
@property (weak, nonatomic) NSObject<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate> *delegate; // ivar: _delegate


-(id)_trimEntries:(id)arg0 toFitCount:(NSInteger)arg1 ;
-(id)entriesTrimmedToFitCount:(NSUInteger)arg0 ;


@end


#endif