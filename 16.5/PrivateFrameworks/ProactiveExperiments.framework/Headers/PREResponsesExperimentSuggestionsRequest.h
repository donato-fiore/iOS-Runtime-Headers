// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRERESPONSESEXPERIMENTSUGGESTIONSREQUEST_H
#define PRERESPONSESEXPERIMENTSUGGESTIONSREQUEST_H

@class NSString, NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PREResponsesExperimentSuggestionsRequest : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *context; // ivar: _context
@property (nonatomic) BOOL includesDynamicSuggestions; // ivar: _includesDynamicSuggestions
@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSDate *languageLastChangedDate; // ivar: _languageLastChangedDate
@property (readonly, copy, nonatomic) NSArray *receivedMessages; // ivar: _receivedMessages
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (retain, nonatomic) NSDate *requestDate; // ivar: _requestDate
@property (copy, nonatomic) NSArray *senderMessages; // ivar: _senderMessages


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReceivedMessages:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif