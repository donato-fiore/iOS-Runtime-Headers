// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITEKEYVALUETABLEENTRY_H
#define CKSQLITEKEYVALUETABLEENTRY_H

@class NSUUID, NSData, NSDate, NSString, NSNumber;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface CKSQLiteKeyValueTableEntry : NSObject

@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSNumber *number; // ivar: _number
@property (retain, nonatomic) NSObject<NSCoding> *object; // ivar: _object
@property (retain, nonatomic) NSNumber *scope; // ivar: _scope
@property (retain, nonatomic) NSString *scopeIdentifier; // ivar: _scopeIdentifier
@property (retain, nonatomic) NSString *string; // ivar: _string


-(id)description;


@end


#endif