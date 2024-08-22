// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTKEYWORDDETECTORASSETS_H
#define VTKEYWORDDETECTORASSETS_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface VTKeywordDetectorAssets : NSObject {
    NSDictionary *_decodedInfo;
}


@property (readonly, nonatomic) NSString *categoryKey; // ivar: _categoryKey
@property (readonly, nonatomic) NSString *configFile; // ivar: _configFile
@property (readonly, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *resourcePath; // ivar: _resourcePath


-(BOOL)VTSecondPassConfigPathRecognizerExist;
-(BOOL)VTSecondPassUseKeywordSpotting;
-(BOOL)_containsCategory:(id)arg0 ;
-(BOOL)_containsKey:(id)arg0 category:(id)arg1 ;
-(BOOL)_getBoolForKey:(id)arg0 category:(id)arg1 default:(BOOL)arg2 ;
-(float)VTSecondPassRecognizerScoreScaleFactor;
-(id)VTSecondPassConfigPathNDAPI;
-(id)VTSecondPassConfigPathRecognizer;
-(id)VTSecondPassRecognizerToken;
-(id)_decodeJson:(id)arg0 ;
-(id)_getNumberForKey:(id)arg0 category:(id)arg1 default:(id)arg2 ;
-(id)_getStringForKey:(id)arg0 category:(id)arg1 default:(id)arg2 ;
-(id)_hearstRTModelWithMajorVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 locale:(id)arg2 ;
-(id)ctcKwdToPhraseIdMap;
-(id)initWithAssetPath:(id)arg0 categoryKey:(id)arg1 forLocale:(id)arg2 ;
-(id)latestHearstRTModel;
-(id)supportedVTPhrasesInfo;


@end


#endif