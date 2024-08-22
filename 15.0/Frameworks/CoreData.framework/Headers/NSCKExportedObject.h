// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCKEXPORTEDOBJECT_H
#define NSCKEXPORTEDOBJECT_H

@class NSNumber, NSString;


#import "NSManagedObject.h"
#import "NSCKExportOperation.h"

@interface NSCKExportedObject : NSManagedObject

@property (nonatomic) NSInteger changeType;
@property (retain, nonatomic) NSNumber *changeTypeNum;
@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSCKExportOperation *operation;
@property (nonatomic) NSUInteger type;
@property (retain, nonatomic) NSNumber *typeNum;
@property (retain, nonatomic) NSString *zoneName;


+(id)entityPath;


@end


#endif