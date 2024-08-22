// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSENDMESSAGESTODIGESTSUGGESTION_H
#define ATXSENDMESSAGESTODIGESTSUGGESTION_H

@protocol NSSecureCoding, ATXProtoBufWrapper, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXSendMessagesToDigestSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>





+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXSendMessagesToDigestSuggestion:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif