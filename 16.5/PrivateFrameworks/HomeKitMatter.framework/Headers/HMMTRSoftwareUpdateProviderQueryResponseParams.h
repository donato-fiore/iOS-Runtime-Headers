// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRSOFTWAREUPDATEPROVIDERQUERYRESPONSEPARAMS_H
#define HMMTRSOFTWAREUPDATEPROVIDERQUERYRESPONSEPARAMS_H

@class NSNumber, NSString, NSData;

#import <Foundation/Foundation.h>


@interface HMMTRSoftwareUpdateProviderQueryResponseParams : NSObject

@property (readonly) NSNumber *delayedActionTime; // ivar: _delayedActionTime
@property (readonly) NSString *imageURI; // ivar: _imageURI
@property (readonly) NSData *metadataForRequestor; // ivar: _metadataForRequestor
@property (readonly) NSNumber *softwareVersion; // ivar: _softwareVersion
@property (readonly) NSString *softwareVersionString; // ivar: _softwareVersionString
@property (readonly) NSNumber *status; // ivar: _status
@property (readonly) NSData *updateToken; // ivar: _updateToken
@property (readonly) NSNumber *userConsentNeeded; // ivar: _userConsentNeeded


-(id)initWithStatus:(id)arg0 delayedActionTime:(id)arg1 imageURI:(id)arg2 softwareVersion:(id)arg3 softwareVersionString:(id)arg4 updateToken:(id)arg5 userConsentNeeded:(id)arg6 metadataForRequestor:(id)arg7 ;


@end


#endif