// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETCHANGENOTIFICATION_H
#define PLASSETCHANGENOTIFICATION_H

@class NSSet;


#import "PLChangeNotification.h"

@interface PLAssetChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *updatedAssets; // ivar: _updatedAssets


+(id)notificationWithChangedAssets:(id)arg0 ;
-(id)_init;
-(id)_initWithChangedObjects:(id)arg0 ;
-(id)description;
-(id)name;
-(id)object;
-(id)userInfo;


@end


#endif