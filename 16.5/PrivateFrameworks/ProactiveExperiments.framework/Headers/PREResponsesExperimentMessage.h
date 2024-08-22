// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRERESPONSESEXPERIMENTMESSAGE_H
#define PRERESPONSESEXPERIMENTMESSAGE_H

@class NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PREResponsesExperimentMessage : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *dateSent; // ivar: _dateSent
@property (nonatomic, getter=isEmote) BOOL emote; // ivar: _emote
@property (nonatomic, getter=isRead) BOOL read; // ivar: _read
@property (copy, nonatomic) NSString *senderIdentifier; // ivar: _senderIdentifier
@property (copy, nonatomic) NSString *summaryString; // ivar: _summaryString
@property (nonatomic, getter=isTapBack) BOOL tapBack; // ivar: _tapBack
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif