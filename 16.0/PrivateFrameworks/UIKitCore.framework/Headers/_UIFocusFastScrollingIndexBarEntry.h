// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSFASTSCROLLINGINDEXBARENTRY_H
#define _UIFOCUSFASTSCROLLINGINDEXBARENTRY_H

@class NSIndexPath, NSString;

#import <Foundation/Foundation.h>


@interface _UIFocusFastScrollingIndexBarEntry : NSObject {
    BOOL _isPlaceholder;
    BOOL _hasCachedContentOffset;
    CGPoint _cachedContentOffset;
    id *_contentOffsetGenerator;
}


@property (readonly, nonatomic) CGPoint contentOffset;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (copy, nonatomic) NSIndexPath *targetFocusedIndexPath; // ivar: _targetFocusedIndexPath
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)entryWithTitle:(id)arg0 contentOffset:(struct CGPoint )arg1 ;
+(id)entryWithTitle:(id)arg0 generator:(id)arg1 ;
+(id)placeholderEntryWithEntryBefore:(id)arg0 after:(id)arg1 ;
-(id)description;
-(id)initWithTitle:(id)arg0 contentOffset:(struct CGPoint )arg1 ;
-(id)initWithTitle:(id)arg0 generator:(id)arg1 ;


@end


#endif