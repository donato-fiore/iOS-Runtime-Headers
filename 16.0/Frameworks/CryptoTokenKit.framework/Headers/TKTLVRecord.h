// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTLVRECORD_H
#define TKTLVRECORD_H

@class NSData;

#import <Foundation/Foundation.h>


@interface TKTLVRecord : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUInteger tag; // ivar: _tag
@property (readonly, nonatomic) NSData *value; // ivar: _value


+(id)parseFromDataSource:(id)arg0 ;
+(id)recordFromData:(id)arg0 ;
+(id)sequenceOfRecordsFromData:(id)arg0 ;
-(id)description;
-(id)initWithTag:(NSUInteger)arg0 value:(id)arg1 data:(id)arg2 ;


@end


#endif