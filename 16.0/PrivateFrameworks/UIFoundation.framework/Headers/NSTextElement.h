// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTEXTELEMENT_H
#define NSTEXTELEMENT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NSTextContentManager.h"
#import "NSTextRange.h"
#import "NSTextElement.h"

@interface NSTextElement : NSObject {
    NSTextContentManager *_textContentManager;
}


@property (readonly, copy) NSArray *childElements;
@property unsigned char coalescingType; // ivar: _coalescingType
@property (retain) NSTextRange *elementRange; // ivar: _elementRange
@property (readonly) BOOL isBeginningOfDocument;
@property (readonly) BOOL isEndOfDocument;
@property (readonly) BOOL isRepresentedElement;
@property (readonly, weak) NSTextElement *parentElement;
@property (weak) NSTextContentManager *textContentManager;


+(NSInteger)_searchElements:(id)arg0 forLocation:(id)arg1 ;
-(id)_firstRepresentableChildElement;
-(id)childTextElementForLocation:(id)arg0 elementIndex:(*NSInteger)arg1 ;
-(id)init;
-(id)initWithTextContentManager:(id)arg0 ;
-(struct CGSize )estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg0 ;
-(void)dealloc;


@end


#endif