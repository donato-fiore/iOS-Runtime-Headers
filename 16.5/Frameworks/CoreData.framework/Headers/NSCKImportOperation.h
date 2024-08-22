// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCKIMPORTOPERATION_H
#define NSCKIMPORTOPERATION_H

@class NSData, NSDate, NSUUID, NSSet;


#import "NSManagedObject.h"

@interface NSCKImportOperation : NSManagedObject

@property (retain, nonatomic) NSData *changeTokenBytes;
@property (retain, nonatomic) NSDate *importDate;
@property (retain, nonatomic) NSUUID *operationUUID;
@property (retain, nonatomic) NSSet *pendingRelationships;




@end


#endif