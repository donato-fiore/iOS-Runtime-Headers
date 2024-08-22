// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTEXTELEMENT_H
#define NSTEXTELEMENT_H


#import <Foundation/Foundation.h>

#import "NSTextContentManager.h"
#import "NSTextRange.h"

@interface NSTextElement : NSObject {
    NSTextContentManager *_textContentManager;
}


@property unsigned char coalescingType; // ivar: _coalescingType
@property (retain) NSTextRange *elementRange; // ivar: _elementRange
@property (weak) NSTextContentManager *textContentManager;


-(id)init;
-(id)initWithTextContentManager:(id)arg0 ;
-(struct CGSize )estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg0 ;
-(void)dealloc;


@end


#endif