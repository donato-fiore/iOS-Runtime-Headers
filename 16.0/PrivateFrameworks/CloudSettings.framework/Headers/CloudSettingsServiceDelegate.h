// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOUDSETTINGSSERVICEDELEGATE_H
#define CLOUDSETTINGSSERVICEDELEGATE_H

@class NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "CloudSettingsService.h"

@interface CloudSettingsServiceDelegate : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CloudSettingsService *service; // ivar: _service
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithStoreIdentifier:(id)arg0 settingsMediator:(id)arg1 ;


@end


#endif