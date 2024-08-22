// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOTASOFTWAREUPDATEPROVIDERCLUSTERQUERYIMAGERESPONSEPARAMS_H
#define CHIPOTASOFTWAREUPDATEPROVIDERCLUSTERQUERYIMAGERESPONSEPARAMS_H

@class NSNumber, NSString, NSData;

#import <Foundation/Foundation.h>


@interface CHIPOtaSoftwareUpdateProviderClusterQueryImageResponseParams : NSObject

@property (retain, nonatomic) NSNumber *delayedActionTime; // ivar: _delayedActionTime
@property (retain, nonatomic) NSString *imageURI; // ivar: _imageURI
@property (retain, nonatomic) NSData *metadataForRequestor; // ivar: _metadataForRequestor
@property (retain, nonatomic) NSNumber *softwareVersion; // ivar: _softwareVersion
@property (retain, nonatomic) NSString *softwareVersionString; // ivar: _softwareVersionString
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSData *updateToken; // ivar: _updateToken
@property (retain, nonatomic) NSNumber *userConsentNeeded; // ivar: _userConsentNeeded


-(id)init;


@end


#endif