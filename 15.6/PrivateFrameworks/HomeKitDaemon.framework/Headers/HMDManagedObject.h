// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMANAGEDOBJECT_H
#define HMDMANAGEDOBJECT_H

@class NSManagedObject, NSString;
@protocol HMFLogging;



@interface HMDManagedObject : NSManagedObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *redactedDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;


@end


#endif