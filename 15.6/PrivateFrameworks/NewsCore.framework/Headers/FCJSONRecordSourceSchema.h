// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCJSONRECORDSOURCESCHEMA_H
#define FCJSONRECORDSOURCESCHEMA_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCJSONRecordSourceSchema : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *allKeys; // ivar: _allKeys
@property (readonly, copy, nonatomic) NSArray *alwaysLocalizedKeys; // ivar: _alwaysLocalizedKeys
@property (readonly, copy, nonatomic) NSArray *keys; // ivar: _keys
@property (readonly, copy, nonatomic) NSArray *localizableKeys; // ivar: _localizableKeys
@property (readonly, copy, nonatomic) NSString *recordIDPrefix; // ivar: _recordIDPrefix
@property (readonly, copy, nonatomic) NSString *recordType; // ivar: _recordType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRecordType:(id)arg0 recordIDPrefix:(id)arg1 keys:(id)arg2 localizableKeys:(id)arg3 ;
-(id)initWithRecordType:(id)arg0 recordIDPrefix:(id)arg1 keys:(id)arg2 localizableKeys:(id)arg3 alwaysLocalizedKeys:(id)arg4 ;


@end


#endif