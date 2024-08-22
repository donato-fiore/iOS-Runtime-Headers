// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSUPLOADSESSIONRECORDMO_H
#define DRSUPLOADSESSIONRECORDMO_H

@class NSManagedObject, NSDate;



@interface DRSUploadSessionRecordMO : NSManagedObject

@property (copy, nonatomic) NSDate *sessionDate;


+(id)fetchRequest;


@end


#endif