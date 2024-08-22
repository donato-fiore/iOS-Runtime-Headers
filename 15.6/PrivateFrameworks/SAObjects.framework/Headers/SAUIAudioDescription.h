// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIAUDIODESCRIPTION_H
#define SAUIAUDIODESCRIPTION_H

@class NSNumber, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUIAudioDescription : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSNumber *bitsPerChannel;
@property (copy, nonatomic) NSNumber *bytesPerFrame;
@property (copy, nonatomic) NSNumber *bytesPerPacket;
@property (copy, nonatomic) NSNumber *channelsPerFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSNumber *formatFlags;
@property (copy, nonatomic) NSNumber *formatID;
@property (copy, nonatomic) NSNumber *framesPerPacket;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *reserved;
@property (copy, nonatomic) NSNumber *sampleRate;
@property (readonly) Class superclass;


+(id)audioDescription;
+(id)audioDescriptionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif