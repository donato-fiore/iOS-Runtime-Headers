// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSRECORD_H
#define TPSRECORD_H

@class NSDate, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TPSRecordDataProvider.h"

@interface TPSRecord : NSObject <NSSecureCoding>



@property (weak, nonatomic) TPSRecordDataProvider *dataProvider; // ivar: _dataProvider
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *pluginID; // ivar: _pluginID
@property (nonatomic) NSUInteger privateCountID; // ivar: _privateCountID
@property (nonatomic) NSUInteger recordCountID; // ivar: _recordCountID
@property (retain, nonatomic) NSUUID *recordUUID; // ivar: _recordUUID
@property (retain, nonatomic) NSString *task; // ivar: _task


+(BOOL)supportsSecureCoding;
-(NSUInteger)getRecordCount;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 pluginID:(id)arg1 task:(id)arg2 ;
-(id)recordData;
-(id)recordDescription;
-(id)recordInfo;
-(void)encodeWithCoder:(id)arg0 ;
-(void)save;
-(void)unsave;


@end


#endif