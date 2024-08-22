// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMETADATAMO_H
#define SHMETADATAMO_H

@class NSManagedObject, NSData;


#import "SHGroupMO.h"
#import "SHTrackMO.h"

@interface SHMetadataMO : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) SHGroupMO *group;
@property (retain, nonatomic) SHTrackMO *track;


+(id)fetchRequest;


@end


#endif