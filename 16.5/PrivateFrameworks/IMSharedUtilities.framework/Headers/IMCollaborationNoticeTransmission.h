// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCOLLABORATIONNOTICETRANSMISSION_H
#define IMCOLLABORATIONNOTICETRANSMISSION_H

@class NSDate, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IMCollaborationNoticeTransmission : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSData *eventData; // ivar: _eventData
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) NSString *guidString; // ivar: _guidString


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventData:(id)arg0 eventType:(NSInteger)arg1 guidString:(id)arg2 date:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif