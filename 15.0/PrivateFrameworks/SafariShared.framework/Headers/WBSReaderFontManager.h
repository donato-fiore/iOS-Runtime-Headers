// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSREADERFONTMANAGER_H
#define WBSREADERFONTMANAGER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface WBSReaderFontManager : NSObject {
    NSArray *_validatedFonts;
}


@property (readonly) NSArray *fonts;
@property (readonly, copy) NSString *languageTag; // ivar: _languageTag
@property (readonly) NSArray *possibleFonts;


-(id)defaultFontForLanguageTag:(id)arg0 ;
-(id)fontWithFontFamilyName:(id)arg0 ;
-(id)init;
-(void)_fontDownloadDidFinish:(id)arg0 ;
-(void)updateLanguageTag:(id)arg0 ;


@end


#endif