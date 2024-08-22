// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUITEXTLAYOUT_H
#define SKUITEXTLAYOUT_H

@class NSString;
@protocol SKUICachedLayout;

#import <Foundation/Foundation.h>


@interface SKUITextLayout : NSObject <SKUICachedLayout>

 {
    *__CTFramesetter _framesetter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat lineHeight; // ivar: _lineHeight
@property (readonly, nonatomic) BOOL requiresTruncation; // ivar: _requiresTruncation
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__CTFrame textFrame; // ivar: _textFrame
@property (readonly, nonatomic) CGSize textSize; // ivar: _size
@property (readonly, nonatomic) CGSize truncatedSize; // ivar: _truncatedSize


+(struct __CFAttributedString *)_newAttributedStringWithRequest:(id)arg0 ;
+(struct __CFAttributedString *)newAttributedStringWithText:(id)arg0 ;
-(id)initWithLayoutRequest:(id)arg0 ;
-(void)dealloc;


@end


#endif