// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPKEYCHAINITEM_H
#define HAPKEYCHAINITEM_H

@class HMFObject, NSString, NSDate, NSData, NSNumber;
@protocol NSMutableCopying;



@interface HAPKeychainItem : HMFObject <NSMutableCopying>



@property (retain, nonatomic) NSString *accessGroup; // ivar: _accessGroup
@property (retain, nonatomic) NSString *account; // ivar: _account
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSData *genericData; // ivar: _genericData
@property (readonly, nonatomic, getter=isInvisible) BOOL invisible; // ivar: _invisible
@property (retain, nonatomic) NSString *itemDescription; // ivar: _itemDescription
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) *void platformReference; // ivar: _platformReference
@property (nonatomic, getter=isSyncable) BOOL syncable; // ivar: _syncable
@property (retain, nonatomic) NSNumber *type; // ivar: _type
@property (retain, nonatomic) NSData *valueData; // ivar: _valueData
@property (retain, nonatomic) NSString *viewHint; // ivar: _viewHint


+(BOOL)isQueryResultValid:(struct __CFDictionary *)arg0 shouldIncludeData:(BOOL)arg1 ;
-(BOOL)matchesPublicKeyData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithQueryResult:(struct __CFDictionary *)arg0 shouldIncludeData:(BOOL)arg1 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif