// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDPROGRAMCOMPLETION_H
#define MANAGEDPROGRAMCOMPLETION_H

@class NSManagedObject, NSString, NSDate;



@interface ManagedProgramCompletion : NSManagedObject

@property (nonatomic, copy) NSString *completingSessionIdentifier;
@property (nonatomic, copy) NSDate *completionDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *programIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif