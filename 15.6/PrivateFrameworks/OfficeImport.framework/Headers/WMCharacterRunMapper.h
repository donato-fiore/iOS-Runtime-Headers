// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WMCHARACTERRUNMAPPER_H
#define WMCHARACTERRUNMAPPER_H

@class NSString;


#import "CMMapper.h"
#import "WDCharacterRun.h"
#import "WMStyle.h"

@interface WMCharacterRunMapper : CMMapper {
    WDCharacterRun *wdCharacterRun;
    WMStyle *mStyle;
    float mFontSizeBumpFactor;
    NSString *mText;
    BOOL mIsDeleted;
}




+(void)addNonCollapsableSpanAt:(id)arg0 withState:(id)arg1 ;
-(BOOL)isDeleted;
-(id)baseStyle;
-(id)boldStyle;
-(id)copyCharacterStyle;
-(id)initWithText:(id)arg0 ;
-(id)initWithWDCharacterRun:(id)arg0 parent:(id)arg1 ;
-(int)defaultTabWidth;
-(unsigned int)countAndStripLeadingTabs;
-(void)map1At:(id)arg0 withState:(id)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapSubstring:(id)arg0 at:(id)arg1 ;
-(void)mapTabs:(unsigned int)arg0 at:(id)arg1 afterText:(id)arg2 ;


@end


#endif