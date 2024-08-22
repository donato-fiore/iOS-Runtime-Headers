// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPEVENTNAMERECORD_H
#define PPEVENTNAMERECORD_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPEventNameRecord : NSObject <NSSecureCoding>



@property (nonatomic) unsigned char changeType; // ivar: _changeType
@property (retain, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (retain, nonatomic) NSArray *participantNames; // ivar: _participantNames
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)describeChangeType:(unsigned char)arg0 ;
+(id)eventNameRecordWithScore:(CGFloat)arg0 eventIdentifier:(id)arg1 changeType:(unsigned char)arg2 title:(id)arg3 location:(id)arg4 participantNames:(id)arg5 ;
-(BOOL)hasScoreSimilarToRecord:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEventNameRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 score:(CGFloat)arg1 eventIdentifier:(id)arg2 changeType:(unsigned char)arg3 title:(id)arg4 location:(id)arg5 participantNames:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif