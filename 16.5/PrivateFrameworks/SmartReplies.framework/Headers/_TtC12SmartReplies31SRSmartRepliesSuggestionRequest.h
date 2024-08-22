// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SMARTREPLIES31SRSMARTREPLIESSUGGESTIONREQUEST_H
#define _TTC12SMARTREPLIES31SRSMARTREPLIESSUGGESTIONREQUEST_H

@class NSString, NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC12SmartReplies31SRSmartRepliesSuggestionRequest : NSObject <NSSecureCoding, NSCopying>

 {
    ? receivedMessages;
    ? senderMessages;
    ? context;
    ? languageCode;
    ? languageLastChangedDate;
    ? requestDate;
    ? recipients;
}


@property (nonatomic, copy) NSString *context;
@property (nonatomic) BOOL includesDynamicSuggestions; // ivar: includesDynamicSuggestions
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSDate *languageLastChangedDate;
@property (nonatomic, copy) NSArray *receivedMessages;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSDate *requestDate;
@property (nonatomic, copy) NSArray *senderMessages;
@property (nonatomic) NSInteger type; // ivar: type


+(BOOL)supportsSecureCoding;
-(id)concatenatedReceivedText;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 receivedMessages:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif