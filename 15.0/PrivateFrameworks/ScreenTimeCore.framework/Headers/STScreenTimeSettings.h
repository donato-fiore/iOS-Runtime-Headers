// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSCREENTIMESETTINGS_H
#define STSCREENTIMESETTINGS_H

@class NSManagedObject;



@interface STScreenTimeSettings : NSManagedObject

@property (nonatomic) BOOL cloudSyncEnabled;
@property (nonatomic) BOOL screenTimeEnabled;


+(id)fetchScreenTimeSettingsInContext:(id)arg0 error:(*id)arg1 ;


@end


#endif