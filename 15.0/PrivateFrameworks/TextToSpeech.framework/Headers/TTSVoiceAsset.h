// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSVOICEASSET_H
#define TTSVOICEASSET_H

@class NSString, NSArray;
@protocol NSSecureCoding;


#import "TTSAssetBase.h"

@interface TTSVoiceAsset : TTSAssetBase <NSSecureCoding>



@property (nonatomic) NSInteger fileSize; // ivar: _fileSize
@property (readonly, nonatomic) NSInteger footprint; // ivar: _footprint
@property (readonly, nonatomic) NSInteger gender; // ivar: _gender
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBuiltInVoice; // ivar: _isBuiltInVoice
@property (nonatomic) BOOL isDownloading; // ivar: _isDownloading
@property (readonly, nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (readonly, nonatomic) NSArray *languages; // ivar: _languages
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL neural; // ivar: _neural
@property (retain, nonatomic) NSString *voicePath; // ivar: _voicePath
@property (nonatomic) NSInteger voiceType; // ivar: _voiceType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithName:(id)arg0 languages:(id)arg1 gender:(NSInteger)arg2 footprint:(NSInteger)arg3 isInstalled:(BOOL)arg4 isBuiltIn:(BOOL)arg5 masteredVersion:(id)arg6 compatibilityVersion:(id)arg7 neural:(BOOL)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif