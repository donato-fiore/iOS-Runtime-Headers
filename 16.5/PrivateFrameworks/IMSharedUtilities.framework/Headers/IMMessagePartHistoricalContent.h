// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMESSAGEPARTHISTORICALCONTENT_H
#define IMMESSAGEPARTHISTORICALCONTENT_H

@class NSString, NSDate, NSAttributedString;

#import <Foundation/Foundation.h>


@interface IMMessagePartHistoricalContent : NSObject

@property (retain, nonatomic) NSString *backwardCompatibleMessageGUID; // ivar: _backwardCompatibleMessageGUID
@property (retain, nonatomic) NSDate *dateSent; // ivar: _dateSent
@property (retain, nonatomic) NSAttributedString *messagePartText; // ivar: _messagePartText


-(id)description;
-(id)initWithMessagePartText:(id)arg0 dateSent:(id)arg1 backwardCompatibleMessageGUID:(id)arg2 ;
-(id)initWithMessageSummaryInfoDictionary:(id)arg0 ;
-(id)messageSummaryInfoDictionaryRepresentation;


@end


#endif