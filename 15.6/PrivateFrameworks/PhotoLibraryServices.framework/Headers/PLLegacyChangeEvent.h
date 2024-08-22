// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLEGACYCHANGEEVENT_H
#define PLLEGACYCHANGEEVENT_H


#import <Foundation/Foundation.h>


@interface PLLegacyChangeEvent : NSObject



+(BOOL)isEmptyEvent:(id)arg0 ;
+(id)_descriptionForEvent:(id)arg0 ;
+(id)_descriptionForEvent:(id)arg0 withPersistentStoreCoordinator:(id)arg1 ;
+(id)localChangeEventFromChangeHubEvent:(id)arg0 withLibraryBundle:(id)arg1 ;


@end


#endif