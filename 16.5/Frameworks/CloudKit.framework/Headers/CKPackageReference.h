// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPACKAGEREFERENCE_H
#define CKPACKAGEREFERENCE_H


#import <Foundation/Foundation.h>

#import "_TtC8CloudKit16PackageReference.h"

@interface CKPackageReference : NSObject

@property (retain, nonatomic) _TtC8CloudKit16PackageReference *packageReference; // ivar: _packageReference


-(NSInteger)databaseScope;
-(id)fieldName;
-(id)initWithRecordID:(id)arg0 databaseScope:(NSInteger)arg1 fieldName:(id)arg2 ;
-(id)initWithSerializedData:(id)arg0 error:(*id)arg1 ;
-(id)recordID;
-(id)serializedDataAndError:(*id)arg0 ;


@end


#endif