// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIAUDIODATA_H
#define SAUIAUDIODATA_H

@class NSData, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIAudioDescription.h"

@interface SAUIAudioData : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSData *audioBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SAUIAudioDescription *decoderStreamDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIAudioDescription *playerStreamDescription;
@property (readonly) Class superclass;


+(id)audioData;
+(id)audioDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif