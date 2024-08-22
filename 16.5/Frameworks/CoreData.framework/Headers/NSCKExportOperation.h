// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCKEXPORTOPERATION_H
#define NSCKEXPORTOPERATION_H

@class NSString, NSSet, NSNumber;


#import "NSManagedObject.h"
#import "NSCKExportMetadata.h"

@interface NSCKExportOperation : NSManagedObject

@property (retain, nonatomic) NSCKExportMetadata *exportMetadata;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *objects;
@property (nonatomic) NSUInteger status;
@property (retain, nonatomic) NSNumber *statusNum;


+(id)entityPath;


@end


#endif