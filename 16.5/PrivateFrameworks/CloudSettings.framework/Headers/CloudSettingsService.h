// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLOUDSETTINGSSERVICE_H
#define CLOUDSETTINGSSERVICE_H

@class NSString;
@protocol CloudSettingsServiceProtocol, CloudSettingsMediator;

#import <Foundation/Foundation.h>

#import "CloudSettingsStore.h"

@interface CloudSettingsService : NSObject <CloudSettingsServiceProtocol>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<CloudSettingsMediator> *mediator; // ivar: _mediator
@property (retain, nonatomic) CloudSettingsStore *store; // ivar: _store


-(id)initWithStoreIdentifier:(id)arg0 settingsMediator:(id)arg1 ;
-(void)applyCloudSettingsToDevice:(id)arg0 forStore:(id)arg1 ;
-(void)performFirstTimeSetupForStore:(id)arg0 ;
-(void)performFirstTimeSetupForStore:(id)arg0 newDevice:(BOOL)arg1 ;
-(void)performSmartMergeWithStoreSettings:(id)arg0 ;
-(void)writeToCloudSettings:(id)arg0 forStore:(id)arg1 ;
-(void)writeToCloudSettingsDict:(id)arg0 forStore:(id)arg1 ;


@end


#endif