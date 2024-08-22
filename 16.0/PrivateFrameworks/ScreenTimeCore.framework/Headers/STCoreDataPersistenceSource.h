// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STCOREDATAPERSISTENCESOURCE_H
#define STCOREDATAPERSISTENCESOURCE_H

@class NSString;
@protocol STPersistenceSource;

#import <Foundation/Foundation.h>


@interface STCoreDataPersistenceSource : NSObject <STPersistenceSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_coreUserForIdentifier:(id)arg0 inContext:(id)arg1 ;
-(id)userDataWithIdentifier:(id)arg0 ;
-(void)saveCommunicationSafetySettingsForDSID:(id)arg0 checkForUnsafePhotos:(BOOL)arg1 communicationSafetyNotificationEnabled:(BOOL)arg2 communicationSafetyAnalyticsEnabled:(BOOL)arg3 completionHandler:(id)arg4 ;


@end


#endif