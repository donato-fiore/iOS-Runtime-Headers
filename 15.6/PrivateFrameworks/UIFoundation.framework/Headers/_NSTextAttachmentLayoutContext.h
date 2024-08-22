// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSTEXTATTACHMENTLAYOUTCONTEXT_H
#define _NSTEXTATTACHMENTLAYOUTCONTEXT_H

@class NSMapTable, NSArray, NSString;
@protocol NSTextViewportElementProvider, NSTextLocation, _NSTextLayoutAttachmentLayoutContextDelegate;

#import <Foundation/Foundation.h>

#import "NSTextContainer.h"
#import "NSTextLayoutFragment.h"

@interface _NSTextAttachmentLayoutContext : NSObject <NSTextViewportElementProvider>

 {
    NSMapTable *_textAttachmentInfoTable;
    NSArray *_sortedKeys;
    NSArray *_textAttachmentViewProviders;
    id<NSTextLocation> *_baseLocation;
}


@property BOOL allowsFontOverridingTextAttachmentVerticalMetrics; // ivar: _allowsFontOverridingTextAttachmentVerticalMetrics
@property NSInteger applicationFrameworkContext; // ivar: _applicationFrameworkContext
@property (readonly) NSObject<NSTextLocation> *baseLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<_NSTextLayoutAttachmentLayoutContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL hasResolvedAttachmentFrame; // ivar: _hasResolvedAttachmentFrame
@property BOOL hasViewProvider; // ivar: _hasViewProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *textAttachmentViewProviders;
@property NSTextContainer *textContainer; // ivar: _textContainer
@property NSTextLayoutFragment *textLayoutFragment; // ivar: _textLayoutFragment
@property BOOL usesFontLeading; // ivar: _usesFontLeading


-(id)_sortedKeys;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)textAttachmentLayoutInfoForLocation:(id)arg0 attributes:(id)arg1 ;
-(id)textContainerForLocation:(id)arg0 ;
-(struct CGRect )proposedLineFragmentRectForLocation:(id)arg0 attributes:(id)arg1 baselineOffset:(*CGFloat)arg2 ;
-(void)_adjustLocations;
-(void)_flushCachedInfo;
-(void)dealloc;
-(void)enumerateViewportElementsFromLocation:(id)arg0 options:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)reset;


@end


#endif