// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8CLOUDKIT16PACKAGEREFERENCE_H
#define _TTC8CLOUDKIT16PACKAGEREFERENCE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CKRecordID.h"

@interface _TtC8CloudKit16PackageReference : NSObject {
    ? fieldName;
}


@property (nonatomic, readonly) NSInteger databaseScope; // ivar: databaseScope
@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) CKRecordID *recordID; // ivar: recordID


-(id)init;
-(id)initWith:(id)arg0 error:(*id)arg1 ;
-(id)initWithRecordID:(id)arg0 databaseScope:(NSInteger)arg1 fieldName:(id)arg2 ;
-(id)serializedDataAndReturnError:(*id)arg0 ;


@end


#endif