// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXINTERRUPTIONMANAGERTUNINGSUGGESTION_H
#define ATXINTERRUPTIONMANAGERTUNINGSUGGESTION_H

@protocol NSSecureCoding, ATXProtoBufWrapper, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXInterruptionManagerTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>



@property (nonatomic) int suggestionType; // ivar: _suggestionType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXInterruptionManagerTuningSuggestion:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)feedbackKeyComponent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSuggestionType:(int)arg0 ;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif