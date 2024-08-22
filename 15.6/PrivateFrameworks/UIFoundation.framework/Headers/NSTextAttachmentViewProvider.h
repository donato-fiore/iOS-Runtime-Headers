// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSTEXTATTACHMENTVIEWPROVIDER_H
#define NSTEXTATTACHMENTVIEWPROVIDER_H

@class UIView;
@protocol NSTextLocation;

#import <Foundation/Foundation.h>

#import "NSLayoutManager.h"
#import "NSTextAttachment.h"
#import "NSTextLayoutManager.h"

@interface NSTextAttachmentViewProvider : NSObject {
    UIView *_view;
}


@property (readonly) NSUInteger characterIndex; // ivar: _characterIndex
@property (weak) NSLayoutManager *layoutManager; // ivar: _layoutManager
@property (retain) NSObject<NSTextLocation> *location; // ivar: _location
@property (weak) NSTextAttachment *textAttachment; // ivar: _textAttachment
@property (weak) NSTextLayoutManager *textLayoutManager; // ivar: _textLayoutManager
@property BOOL tracksTextAttachmentViewBounds; // ivar: _tracksTextAttachmentViewBounds
@property (retain) UIView *view;


-(id)initWithTextAttachment:(id)arg0 parentView:(id)arg1 characterIndex:(NSUInteger)arg2 layoutManager:(id)arg3 ;
-(id)initWithTextAttachment:(id)arg0 parentView:(id)arg1 textLayoutManager:(id)arg2 location:(id)arg3 ;
-(struct CGRect )attachmentBoundsForAttributes:(id)arg0 location:(id)arg1 textContainer:(id)arg2 proposedLineFragment:(struct CGRect )arg3 position:(struct CGPoint )arg4 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)loadView;
-(void)removeView;


@end


#endif