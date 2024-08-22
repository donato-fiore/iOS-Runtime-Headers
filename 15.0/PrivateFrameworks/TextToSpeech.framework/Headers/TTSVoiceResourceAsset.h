// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSVOICERESOURCEASSET_H
#define TTSVOICERESOURCEASSET_H

@class NSArray, NSURL, NSDictionary;
@protocol NSSecureCoding;


#import "TTSAssetBase.h"

@interface TTSVoiceResourceAsset : TTSAssetBase <NSSecureCoding>



@property (copy, nonatomic) NSArray *languages; // ivar: _languages
@property (copy, nonatomic) NSArray *resourceList; // ivar: _resourceList
@property (copy, nonatomic) NSURL *searchPathURL; // ivar: _searchPathURL
@property (copy, nonatomic) NSDictionary *voiceConfig; // ivar: _voiceConfig


+(BOOL)supportsSecureCoding;
+(id)legacyPlatforms;
-(id)defaultFootprintString;
-(id)defaultTypeString;
-(id)defaultVoice;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)syncWithConfigFile:(id)arg0 voiceType:(NSInteger)arg1 ;


@end


#endif