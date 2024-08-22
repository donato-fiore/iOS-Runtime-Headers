// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDRUNWITHCHARACTERPROPERTIES_H
#define WDRUNWITHCHARACTERPROPERTIES_H



#import "WDRun.h"
#import "WDCharacterProperties.h"

@interface WDRunWithCharacterProperties : WDRun

@property (readonly, getter=isHidden) BOOL hidden;
@property (retain) WDCharacterProperties *properties; // ivar: mProperties


-(id)initWithParagraph:(id)arg0 ;
-(void)clearProperties;


@end


#endif