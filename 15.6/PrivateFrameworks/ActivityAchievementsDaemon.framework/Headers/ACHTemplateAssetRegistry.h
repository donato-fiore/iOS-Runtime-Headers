// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHTEMPLATEASSETREGISTRY_H
#define ACHTEMPLATEASSETREGISTRY_H

@class NSMutableDictionary;
@protocol ACHTemplateSourceDelegate, ACHTemplateAssetRegistryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHRemoteTemplateAvailabilityKeyProvider.h"

@interface ACHTemplateAssetRegistry : NSObject <ACHTemplateSourceDelegate>



@property (weak, nonatomic) NSObject<ACHTemplateAssetRegistryDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) ACHRemoteTemplateAvailabilityKeyProvider *remoteTemplateAvailabilityKeyProvider; // ivar: _remoteTemplateAvailabilityKeyProvider
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) NSMutableDictionary *templateSourcesByIdentifier; // ivar: _templateSourcesByIdentifier


-(id)initWithRemoteTemplateAvailabilityKeyProvider:(id)arg0 ;
-(void)_setBundleURLsForAchievement:(id)arg0 ;
-(void)deregisterTemplateSource:(id)arg0 ;
-(void)populateResourcePropertiesForAchievement:(id)arg0 ;
-(void)registerTemplateSource:(id)arg0 ;
-(void)templateSourceDidUpdateAssets:(id)arg0 ;


@end


#endif