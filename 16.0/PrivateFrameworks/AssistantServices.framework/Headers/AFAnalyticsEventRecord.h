// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFANALYTICSEVENTRECORD_H
#define AFANALYTICSEVENTRECORD_H

@class NSDate, NSString;
@protocol SiriCoreSQLiteRecord, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFAnalyticsEvent.h"

@interface AFAnalyticsEventRecord : NSObject <SiriCoreSQLiteRecord, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) AFAnalyticsEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *recordId; // ivar: _recordId
@property (readonly, copy, nonatomic) NSString *speechId; // ivar: _speechId
@property (readonly, copy, nonatomic) NSString *streamUID; // ivar: _streamUID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 streamUID:(id)arg1 dateCreated:(id)arg2 speechId:(id)arg3 ;
-(id)initWithEvent:(id)arg0 streamUID:(id)arg1 dateCreated:(id)arg2 speechId:(id)arg3 recordId:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)siriCoreSQLiteRecord_enumerateColumnNamesAndValuesUsingBlock:(id)arg0 ;


@end


#endif