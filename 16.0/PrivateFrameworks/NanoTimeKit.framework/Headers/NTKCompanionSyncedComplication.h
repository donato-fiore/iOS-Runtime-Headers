// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOMPANIONSYNCEDCOMPLICATION_H
#define NTKCOMPANIONSYNCEDCOMPLICATION_H

@class NSString, CLKComplicationDescriptor;

#import <Foundation/Foundation.h>


@interface NTKCompanionSyncedComplication : NSObject {
    NSString *_companionBundleIdentifier;
    NSString *_fallbackName;
    NSString *_localizedName;
}


@property (readonly, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) CLKComplicationDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSString *localizedName;


-(id)initWithRemoteApplication:(id)arg0 descriptor:(id)arg1 ;


@end


#endif