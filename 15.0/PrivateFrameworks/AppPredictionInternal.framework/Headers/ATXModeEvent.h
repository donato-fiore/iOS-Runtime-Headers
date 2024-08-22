// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODEEVENT_H
#define ATXMODEEVENT_H

@class NSString, NSDate;
@protocol BMStoreData, ATXModeEntityProtocol;

#import <Foundation/Foundation.h>


@interface ATXModeEvent : NSObject <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSObject<ATXModeEntityProtocol> *entity; // ivar: _entity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 entity:(id)arg2 ;
-(id)json;
-(id)jsonRawData;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif