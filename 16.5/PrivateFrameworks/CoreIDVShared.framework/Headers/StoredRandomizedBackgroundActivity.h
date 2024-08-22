// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOREDRANDOMIZEDBACKGROUNDACTIVITY_H
#define STOREDRANDOMIZEDBACKGROUNDACTIVITY_H

@class NSManagedObject, NSString, NSDate;



@interface StoredRandomizedBackgroundActivity : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastAttemptAt;
@property (nonatomic, copy) NSDate *lastSuccessfulAttemptAt;
@property (nonatomic, copy) NSDate *nextAttemptAt;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif