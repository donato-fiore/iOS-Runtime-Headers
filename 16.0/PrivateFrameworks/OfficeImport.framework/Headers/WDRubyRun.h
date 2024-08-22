// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDRUBYRUN_H
#define WDRUBYRUN_H



#import "WDCharacterRun.h"
#import "WDRubyProperties.h"

@interface WDRubyRun : WDCharacterRun {
    WDCharacterRun *mPhoneticRun;
    WDRubyProperties *mRubyProperties;
}




-(id)description;
-(id)initWithParagraph:(id)arg0 ;
-(id)phoneticRun;
-(id)phoneticRunString;
-(id)rubyBase;
-(id)rubyProperties;
-(int)runType;
-(void)appendPhoneticRunString:(id)arg0 ;
-(void)setPhoneticRunString:(id)arg0 ;


@end


#endif