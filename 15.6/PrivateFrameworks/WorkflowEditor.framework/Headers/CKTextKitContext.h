// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTKITCONTEXT_H
#define CKTEXTKITCONTEXT_H

@class NSLayoutManager, NSTextStorage, NSTextContainer;

#import <Foundation/Foundation.h>


@interface CKTextKitContext : NSObject {
    mutex _textKitMutex;
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
}




-(id)initWithAttributedString:(id)arg0 lineBreakMode:(NSInteger)arg1 maximumNumberOfLines:(NSUInteger)arg2 constrainedSize:(struct CGSize )arg3 layoutManagerFactory:(*unk)arg4 ;
-(void)performBlockWithLockedTextKitComponents:(id)arg0 ;


@end


#endif