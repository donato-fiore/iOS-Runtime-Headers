// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC21SIRIINFORMATIONSEARCH15AUDIOEXPERIENCE_H
#define _TTC21SIRIINFORMATIONSEARCH15AUDIOEXPERIENCE_H

@class TtC21SiriInformationSearch10Experience;



@interface _TtC21SiriInformationSearch15AudioExperience : TtC21SiriInformationSearch10Experience {
    ? serverAudioResults;
    ? isGlideEligible;
    ? audioUnderstanding;
    ? parse;
    ? playbackSignals;
    ? internalSignals;
    ? pegasusAudioType;
    ? launchID;
    ? systemExtensionBundleID;
    ? boltProxiedBundleID;
    ? shouldPerformAppSelection;
    ? audioClientComponent;
    ? lock;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif