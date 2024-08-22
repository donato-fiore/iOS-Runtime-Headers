// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCKRECORD_H
#define IDSCKRECORD_H

@protocol IDSCKRecordKeyValueSetting;

#import <Foundation/Foundation.h>

#import "IDSCKRecordID.h"

@interface IDSCKRecord : NSObject

@property (readonly, nonatomic) NSObject<IDSCKRecordKeyValueSetting> *encryptedValuesByKey; // ivar: _encryptedValuesByKey
@property (readonly, copy, nonatomic) IDSCKRecordID *recordID; // ivar: _recordID


+(Class)__class;
+(id)alloc;


@end


#endif