// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSTEXTATTACHMENTLAYOUTINFO_H
#define _NSTEXTATTACHMENTLAYOUTINFO_H

@class NSDictionary;
@protocol NSTextLocation;

#import <Foundation/Foundation.h>

#import "NSTextAttachmentViewProvider.h"
#import "NSTextLayoutFragment.h"
#import "_NSTextAttachmentLayoutContext.h"
#import "NSTextAttachment.h"

@interface _NSTextAttachmentLayoutInfo : NSObject {
    id<NSTextLocation> *_location;
    NSInteger _locationOffsetFromBase;
    NSTextAttachmentViewProvider *_textAttachmentViewProvider;
    NSTextLayoutFragment *_textLayoutFragment;
    *__CTRunDelegate _runDelegate;
    CGRect _resolvedAttachmentFrame;
    CGRect _bounds;
    CGRect _proposedLineFragment;
    CGFloat _baselineOffset;
    CGFloat _horizontalOffset;
    BOOL _isBoundsValid;
    BOOL _isLineFragmentLayout;
}


@property (readonly, copy) NSDictionary *attributes; // ivar: _attributes
@property (readonly) _NSTextAttachmentLayoutContext *layoutContext; // ivar: _layoutContext
@property (readonly) NSObject<NSTextLocation> *location;
@property CGRect resolvedAttachmentFrame;
@property (readonly) *__CTRunDelegate runDelegate;
@property (readonly) NSTextAttachment *textAttachment; // ivar: _textAttachment
@property (retain) NSTextAttachmentViewProvider *textAttachmentViewProvider;


-(id)initWithContext:(id)arg0 location:(id)arg1 attributes:(id)arg2 ;
-(id)textLayoutFragment;
-(void)_invalidateLocations;
-(void)_queryLayout;
-(void)_queryLayoutWithHorizontalOffset:(CGFloat)arg0 ;
-(void)dealloc;
-(void)invalidateAttachmentMeasurements;


@end


#endif