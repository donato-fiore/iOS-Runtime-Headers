// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDOPTINPRIVACYPREFERENCE_H
#define MANAGEDOPTINPRIVACYPREFERENCE_H

@class NSManagedObject, NSString;



@interface ManagedOptInPrivacyPreference : NSManagedObject

@property (nonatomic) int state;
@property (nonatomic, copy) NSString *version;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif