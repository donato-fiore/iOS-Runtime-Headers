// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASUPDATEAUDIOINFO_H
#define SASUPDATEAUDIOINFO_H

@class NSString, NSNumber;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SASRecordingInfo.h"

@interface SASUpdateAudioInfo : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *audioDestination;
@property (copy, nonatomic) NSString *audioSource;
@property (nonatomic) int codec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *dspStatus;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *headsetAddress;
@property (copy, nonatomic) NSString *headsetId;
@property (copy, nonatomic) NSString *headsetName;
@property (copy, nonatomic) NSNumber *noiseReductionLevel;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) SASRecordingInfo *recordingInfo;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic) BOOL triggeredTwoShotBorealis;
@property (copy, nonatomic) NSString *vendorId;


+(id)updateAudioInfo;
+(id)updateAudioInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif