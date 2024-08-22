// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFONTNAMECACHEKEY_H
#define _UIFONTNAMECACHEKEY_H

@class UIFontCacheKey, NSString;



@interface _UIFontNameCacheKey : UIFontCacheKey

@property (copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (nonatomic) int traits; // ivar: _traits


-(BOOL)_isEqualToKey:(id)arg0 ;
-(NSUInteger)_hash;
-(id)description;
-(void)dealloc;


@end


#endif