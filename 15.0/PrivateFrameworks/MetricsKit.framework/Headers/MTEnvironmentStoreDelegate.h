// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTENVIRONMENTSTOREDELEGATE_H
#define MTENVIRONMENTSTOREDELEGATE_H

@class NSString;
@protocol MTEnvironmentDelegate;


#import "MTEnvironmentDeviceDelegate.h"

@interface MTEnvironmentStoreDelegate : MTEnvironmentDeviceDelegate <MTEnvironmentDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_activeItunesAccount;
-(id)_connectionType;
-(id)connectionType;
-(id)cookies;
-(id)dsId;
-(id)storeFrontHeader;
-(id)userAgent;


@end


#endif