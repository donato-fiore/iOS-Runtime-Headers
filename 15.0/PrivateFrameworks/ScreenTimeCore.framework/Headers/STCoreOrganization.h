// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCOREORGANIZATION_H
#define STCOREORGANIZATION_H

@class NSManagedObject, NSSet;



@interface STCoreOrganization : NSManagedObject

@property (copy, nonatomic) NSSet *blueprints;
@property (retain, nonatomic) NSSet *enqueuedPayloads;
@property (retain, nonatomic) NSSet *pendingPayloads;
@property (retain, nonatomic) NSSet *recentPayloads;


+(Class)internalClassForSerializableClassName:(id)arg0 ;


@end


#endif