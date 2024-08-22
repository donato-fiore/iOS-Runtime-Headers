// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFONTSYSTEMCACHEKEY_H
#define _UIFONTSYSTEMCACHEKEY_H

@class UIFontCacheKey, NSString;



@interface _UIFontSystemCacheKey : UIFontCacheKey

@property (copy, nonatomic) NSString *design; // ivar: _design
@property (nonatomic) BOOL monospacedDigits; // ivar: _monospacedDigits
@property (nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (nonatomic) BOOL textLegibility; // ivar: _textLegibility
@property (nonatomic) int traits; // ivar: _traits
@property (nonatomic) CGFloat weight; // ivar: _weight


-(BOOL)_isEqualToKey:(id)arg0 ;
-(NSUInteger)_hash;
-(id)description;
-(void)dealloc;


@end


#endif