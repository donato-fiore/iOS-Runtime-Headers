// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFONTDESCRIPTORCACHEKEY_H
#define _UIFONTDESCRIPTORCACHEKEY_H

@class UIFontCacheKey, NSString;


#import "UIFontDescriptor.h"

@interface _UIFontDescriptorCacheKey : UIFontCacheKey

@property (copy, nonatomic) UIFontDescriptor *fontDescriptor; // ivar: _fontDescriptor
@property (nonatomic) CGFloat maximumPointSizeAfterScaling; // ivar: _maximumPointSizeAfterScaling
@property (nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (nonatomic) CGFloat pointSizeForScaling; // ivar: _pointSizeForScaling
@property (nonatomic) BOOL textLegibility; // ivar: _textLegibility
@property (copy, nonatomic) NSString *textStyleForScaling; // ivar: _textStyleForScaling


-(BOOL)_isEqualToKey:(id)arg0 ;
-(NSUInteger)_hash;
-(id)description;
-(void)dealloc;


@end


#endif