// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SANPVIDEOAUDIOANDSUBTITLELANGUAGEOPTIONS_H
#define SANPVIDEOAUDIOANDSUBTITLELANGUAGEOPTIONS_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SANPVideoLanguageOption.h"

@interface SANPVideoAudioAndSubtitleLanguageOptions : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *availableSubtitles;
@property (copy, nonatomic) NSArray *availableTracks;
@property (retain, nonatomic) SANPVideoLanguageOption *currentAudioTrack;
@property (retain, nonatomic) SANPVideoLanguageOption *currentSubtitles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)audioAndSubtitleLanguageOptions;
+(id)audioAndSubtitleLanguageOptionsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif