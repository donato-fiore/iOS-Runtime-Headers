// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROTASOFTWAREUPDATEPROVIDERCLUSTERNOTIFYUPDATEAPPLIEDPARAMS_H
#define MTROTASOFTWAREUPDATEPROVIDERCLUSTERNOTIFYUPDATEAPPLIEDPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTROtaSoftwareUpdateProviderClusterNotifyUpdateAppliedParams : NSObject

@property (retain, nonatomic) NSNumber *softwareVersion; // ivar: _softwareVersion
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSData *updateToken; // ivar: _updateToken


-(id)description;
-(id)init;


@end


#endif