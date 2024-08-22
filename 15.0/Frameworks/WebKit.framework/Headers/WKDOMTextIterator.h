// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKDOMTEXTITERATOR_H
#define WKDOMTEXTITERATOR_H


#import <Foundation/Foundation.h>

#import "WKDOMRange.h"

@interface WKDOMTextIterator : NSObject {
    unique_ptr<WebCore::TextIterator, std::default_delete<WebCore::TextIterator>> _textIterator;
    Vector<unsigned short, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _upconvertedText;
}


@property (readonly) BOOL atEnd;
@property (readonly) WKDOMRange *currentRange;
@property (readonly) NSUInteger currentTextLength;
@property (readonly) *unsigned short currentTextPointer;


-(id)initWithRange:(id)arg0 ;
-(void)advance;


@end


#endif