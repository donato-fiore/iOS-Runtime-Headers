// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMOVEDUSER_H
#define REMOVEDUSER_H

@class NSManagedObject, NSDate, NSString;



@interface RemovedUser : NSManagedObject

@property (copy, nonatomic) NSDate *dateRemoved;
@property (copy, nonatomic) NSString *removedHandle;
@property (copy, nonatomic) NSString *statusTypeIdentifier;


+(id)fetchRequest;
+(id)handleKeyPath;
+(id)predicateForHandle:(id)arg0 ;
+(id)predicateForHandleString:(id)arg0 ;
+(id)predicateForStatusTypeIdentifier:(id)arg0 ;


@end


#endif