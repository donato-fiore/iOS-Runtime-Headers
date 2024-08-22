// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROTASOFTWAREUPDATEPROVIDERCLUSTERAPPLYUPDATEREQUESTPARAMS_H
#define MTROTASOFTWAREUPDATEPROVIDERCLUSTERAPPLYUPDATEREQUESTPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTROtaSoftwareUpdateProviderClusterApplyUpdateRequestParams : NSObject

@property (retain, nonatomic, getter=getNewVersion) NSNumber *newVersion; // ivar: _newVersion
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSData *updateToken; // ivar: _updateToken


-(id)description;
-(id)init;


@end


#endif