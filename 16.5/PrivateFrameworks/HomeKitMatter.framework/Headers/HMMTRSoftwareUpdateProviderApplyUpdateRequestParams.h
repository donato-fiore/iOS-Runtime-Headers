// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRSOFTWAREUPDATEPROVIDERAPPLYUPDATEREQUESTPARAMS_H
#define HMMTRSOFTWAREUPDATEPROVIDERAPPLYUPDATEREQUESTPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface HMMTRSoftwareUpdateProviderApplyUpdateRequestParams : NSObject

@property (readonly) NSNumber *softwareVersion; // ivar: _softwareVersion
@property (readonly) NSData *updateToken; // ivar: _updateToken


-(id)initWithUpdateToken:(id)arg0 softwareVersion:(id)arg1 ;


@end


#endif