// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCKEXPORTMETADATA_H
#define NSCKEXPORTMETADATA_H

@class NSDate, NSString, NSSet;


#import "NSManagedObject.h"
#import "NSPersistentHistoryToken.h"

@interface NSCKExportMetadata : NSManagedObject

@property (retain, nonatomic) NSDate *exportedAt;
@property (retain, nonatomic) NSPersistentHistoryToken *historyToken;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *operations;


+(id)entityPath;


@end


#endif