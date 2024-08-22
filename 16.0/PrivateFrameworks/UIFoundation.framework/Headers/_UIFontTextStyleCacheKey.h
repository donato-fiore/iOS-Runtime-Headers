// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFONTTEXTSTYLECACHEKEY_H
#define _UIFONTTEXTSTYLECACHEKEY_H

@class UIFontCacheKey, NSString;



@interface _UIFontTextStyleCacheKey : UIFontCacheKey

@property (copy, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (nonatomic) BOOL textLegibility; // ivar: _textLegibility
@property (copy, nonatomic) NSString *textStyle; // ivar: _textStyle


-(BOOL)_isEqualToKey:(id)arg0 ;
-(NSUInteger)_hash;
-(id)description;
-(void)dealloc;


@end


#endif