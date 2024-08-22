// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBTEXTITERATOR_H
#define WEBTEXTITERATOR_H


#import <Foundation/Foundation.h>

#import "WebTextIteratorPrivate.h"

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}




-(*unsigned short)currentTextPointer;
-(BOOL)atEnd;
-(NSUInteger)currentTextLength;
-(id)currentNode;
-(id)currentRange;
-(id)currentText;
-(id)initWithRange:(id)arg0 ;
-(void)advance;
-(void)dealloc;


@end


#endif