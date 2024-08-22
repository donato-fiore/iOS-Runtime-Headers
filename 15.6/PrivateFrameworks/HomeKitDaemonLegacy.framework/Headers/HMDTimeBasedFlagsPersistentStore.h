// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDTIMEBASEDFLAGSPERSISTENTSTORE_H
#define HMDTIMEBASEDFLAGSPERSISTENTSTORE_H

@class HMFObject;
@protocol HMDTimeBasedFlagsStoring;



@interface HMDTimeBasedFlagsPersistentStore : HMFObject <HMDTimeBasedFlagsStoring>





-(id)unarchive;
-(id)unarchiveDictionary;
-(id)unarchiveLegacyDictionary;
-(id)unarchiveLegacyFlags;
-(void)archiveDictionary:(id)arg0 ;


@end


#endif