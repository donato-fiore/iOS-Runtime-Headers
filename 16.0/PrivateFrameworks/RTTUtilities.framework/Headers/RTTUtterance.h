// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTTUTTERANCE_H
#define RTTUTTERANCE_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTTUtterance : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *contactPath; // ivar: _contactPath
@property (nonatomic) BOOL ignoreTimeoutTemporarily; // ivar: _ignoreTimeoutTemporarily
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (nonatomic) BOOL isTranscription; // ivar: _isTranscription
@property (retain, nonatomic) NSDate *lastChangeDate; // ivar: _lastChangeDate
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)contactPathIsMe:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)utteranceWithContactPath:(id)arg0 andText:(id)arg1 ;
+(id)utteranceWithContactPath:(id)arg0 andText:(id)arg1 isTranscription:(BOOL)arg2 ;
-(BOOL)hasTimedOut;
-(BOOL)isComplete;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetTimeout;
-(void)updateText:(id)arg0 ;


@end


#endif