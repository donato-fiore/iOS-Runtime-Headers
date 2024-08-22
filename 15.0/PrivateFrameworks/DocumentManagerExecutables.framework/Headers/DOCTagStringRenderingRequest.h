// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCTAGSTRINGRENDERINGREQUEST_H
#define DOCTAGSTRINGRENDERINGREQUEST_H

@class NSString, NSDictionary;


#import "DOCTagRenderingRequest.h"

@interface DOCTagStringRenderingRequest : DOCTagRenderingRequest

@property (nonatomic) CGFloat tagBaselineAdjustment; // ivar: _tagBaselineAdjustment
@property (nonatomic) CGFloat tagToTitleSpacing; // ivar: _tagToTitleSpacing
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSDictionary *textAttributes; // ivar: _textAttributes


+(id)requestForChainedTags:(id)arg0 tagDimension:(CGFloat)arg1 text:(id)arg2 textAttributes:(id)arg3 ;
+(id)requestForTag:(id)arg0 tagDimension:(CGFloat)arg1 text:(id)arg2 textAttributes:(id)arg3 ;
-(id)_UIImageCacheKeyWithAdditionalComponents:(id)arg0 ;
-(id)init;


@end


#endif