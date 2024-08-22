// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDTIMEBASEDFLAGSPERSISTENTSTORE_H
#define HMDTIMEBASEDFLAGSPERSISTENTSTORE_H

@protocol HMDTimeBasedFlagsStoring;

#import <Foundation/Foundation.h>


@interface HMDTimeBasedFlagsPersistentStore : NSObject <HMDTimeBasedFlagsStoring>





-(id)unarchive;
-(id)unarchiveLegacyEventFlags;
-(void)archiveDictionary:(id)arg0 ;


@end


#endif