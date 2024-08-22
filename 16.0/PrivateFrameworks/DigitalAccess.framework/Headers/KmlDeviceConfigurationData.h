// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KMLDEVICECONFIGURATIONDATA_H
#define KMLDEVICECONFIGURATIONDATA_H

@class NSMutableArray, NSData;

#import <Foundation/Foundation.h>


@interface KmlDeviceConfigurationData : NSObject {
    NSMutableArray *_remainingTlvs;
    BOOL _supportedRadioTagParsed;
    BOOL _sharingConfigTagParsed;
    BOOL _readerSupportsNfc;
    BOOL _readerSupportsUwb;
    BOOL _readerSupportsLELR;
    BOOL _sharingPasswordRequired;
    unsigned char _sharingPasswordLength;
    unsigned char _immoTokenConfig;
    BOOL _keyTrackingReceiptRequired;
    BOOL _onlineAttestationDeliverySupported;
    NSData *_readerBtIRK;
    NSData *_readerBtIdAddress;
    NSData *_deviceBtOOBKey;
    NSData *_deviceBtIntroKey;
    NSData *_supportedKeyProfiles;
    NSData *_confMailboxSettingAsData;
    NSData *_privateMailboxSettingAsData;
    NSData *_sharingPasswordLengthAsData;
}






@end


#endif