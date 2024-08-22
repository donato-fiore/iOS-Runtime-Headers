// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRICORESYNCRECORD_H
#define SIRICORESYNCRECORD_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface SiriCoreSyncRecord : NSObject

@property (retain, nonatomic) NSData *addedValue; // ivar: _addedValue
@property (retain, nonatomic) NSData *checkHash; // ivar: _checkHash
@property (retain, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (retain, nonatomic) NSString *debugValue; // ivar: _debugValue
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int itemPriority; // ivar: _itemPriority
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSData *metaValue; // ivar: _metaValue
@property (nonatomic) CGFloat updateTime; // ivar: _updateTime


+(id)syncRecordWithKey:(id)arg0 identifier:(id)arg1 ;
+(id)syncRecordWithKey:(id)arg0 identifier:(id)arg1 priority:(int)arg2 debugValue:(id)arg3 dataValue:(id)arg4 addedValue:(id)arg5 appMeta:(id)arg6 ;
-(id)description;
-(id)initWithKey:(id)arg0 identifier:(id)arg1 priority:(int)arg2 debugValue:(id)arg3 dataValue:(id)arg4 addedValue:(id)arg5 appMeta:(id)arg6 ;
-(void)updateHash;


@end


#endif