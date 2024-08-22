// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STTESTSYNCABLESUBOBJECT_H
#define STTESTSYNCABLESUBOBJECT_H

@class NSManagedObject, NSString;
@protocol STSyncableSubObject, STSerializableManagedObject;


#import "STTestSyncableObject.h"

@interface STTestSyncableSubObject : NSManagedObject <STSyncableSubObject>



@property (nonatomic) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) STTestSyncableObject *root;
@property (readonly) Class superclass;
@property (readonly) NSObject<STSerializableManagedObject> *syncableRootObject;




@end


#endif