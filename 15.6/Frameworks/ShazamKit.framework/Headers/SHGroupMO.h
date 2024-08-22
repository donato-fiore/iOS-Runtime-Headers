// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHGROUPMO_H
#define SHGROUPMO_H

@class NSManagedObject, NSString, NSSet;


#import "SHMetadataMO.h"

@interface SHGroupMO : NSManagedObject

@property (retain, nonatomic) SHMetadataMO *metadata;
@property (copy, nonatomic) NSString *syncID;
@property (retain, nonatomic) NSSet *tracks;


+(id)fetchRequest;


@end


#endif