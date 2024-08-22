// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOTASOFTWAREUPDATEPROVIDERCLUSTERNOTIFYUPDATEAPPLIEDPARAMS_H
#define CHIPOTASOFTWAREUPDATEPROVIDERCLUSTERNOTIFYUPDATEAPPLIEDPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPOtaSoftwareUpdateProviderClusterNotifyUpdateAppliedParams : NSObject

@property (retain, nonatomic) NSNumber *softwareVersion; // ivar: _softwareVersion
@property (retain, nonatomic) NSData *updateToken; // ivar: _updateToken


-(id)init;


@end


#endif