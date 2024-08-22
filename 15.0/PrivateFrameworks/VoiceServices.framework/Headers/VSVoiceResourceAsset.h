// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSVOICERESOURCEASSET_H
#define VSVOICERESOURCEASSET_H

@class NSArray, NSDictionary, NSURL;
@protocol NSSecureCoding;


#import "VSAssetBase.h"

@interface VSVoiceResourceAsset : VSAssetBase <NSSecureCoding>



@property (copy, nonatomic) NSArray *languages; // ivar: _languages
@property (nonatomic) float pitch; // ivar: _pitch
@property (nonatomic) float rate; // ivar: _rate
@property (copy, nonatomic) NSArray *resourceList; // ivar: _resourceList
@property (copy, nonatomic) NSDictionary *resourceMimeTypes; // ivar: _resourceMimeTypes
@property (copy, nonatomic) NSURL *searchPathURL; // ivar: _searchPathURL
@property (retain, nonatomic) NSDictionary *vocalizerConfig; // ivar: _vocalizerConfig
@property (copy, nonatomic) NSDictionary *voiceConfig; // ivar: _voiceConfig
@property (nonatomic) float volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
+(id)resourceFromTrial:(id)arg0 ;
-(NSInteger)defaultVoiceGender;
-(NSInteger)defaultVoiceType;
-(id)_defaultVoices;
-(id)defaultVoice;
-(id)defaultVoiceNameForGender:(NSInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)key;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif