// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDNOTE_H
#define WDNOTE_H



#import "WDRun.h"
#import "WDText.h"
#import "WDCharacterRun.h"

@interface WDNote : WDRun {
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mAutomaticNumbering;
}




-(BOOL)automaticNumbering;
-(id)description;
-(id)initWithParagraph:(id)arg0 footnote:(BOOL)arg1 ;
-(id)reference;
-(id)text;
-(int)runType;
-(void)setAutomaticNumbering:(BOOL)arg0 ;


@end


#endif