// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHTARGETINGTRACKMO_H
#define SHTARGETINGTRACKMO_H

@class NSManagedObject, NSString;



@interface SHTargetingTrackMO : NSManagedObject

@property (copy, nonatomic) NSString *parent;
@property (copy, nonatomic) NSString *trackKey;


+(id)fetchRequest;


@end


#endif