// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDNOTICEPRIVACYPREFERENCEJOURNAL_H
#define MANAGEDNOTICEPRIVACYPREFERENCEJOURNAL_H

@class NSManagedObject, NSDate, NSString;



@interface ManagedNoticePrivacyPreferenceJournal : NSManagedObject

@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *version;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif