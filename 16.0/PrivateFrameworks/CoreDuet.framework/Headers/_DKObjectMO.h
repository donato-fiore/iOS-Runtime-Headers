// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKOBJECTMO_H
#define _DKOBJECTMO_H

@class NSManagedObject, NSDate, NSString, NSNumber;


#import "_DKEventMO.h"
#import "_DKSourceMO.h"

@interface _DKObjectMO : NSManagedObject

@property (copy, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) _DKEventMO *event;
@property (copy, nonatomic) NSDate *localCreationDate;
@property (retain, nonatomic) _DKSourceMO *source;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSNumber *uuidHash;


+(id)fetchRequest;


@end


#endif