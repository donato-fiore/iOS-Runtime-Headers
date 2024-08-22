// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGINPUTSUGGESTIONSEXPLANATIONSET_H
#define PSGINPUTSUGGESTIONSEXPLANATIONSET_H

@class _PASLock;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PSGInputSuggestionsExplanationSet : NSObject <NSSecureCoding, NSCopying>

 {
    _PASLock *_lock;
}




+(BOOL)supportsSecureCoding;
+(id)_stringFromExplanation:(unsigned char)arg0 ;
+(id)stringFromExplanationCode:(unsigned int)arg0 ;
-(BOOL)hasContactsServingError;
-(BOOL)hasPETLoggingData;
-(BOOL)hasTriggeringXPCTimeout;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToExplanationSet:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSet:(id)arg0 ;
-(void)_pushExplanationCode:(unsigned short)arg0 namespaceId:(unsigned short)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateExplanationCodeWithBlock:(id)arg0 ;
-(void)pushInternalExplanationCode:(unsigned int)arg0 ;
-(void)pushPortraitExplanationCode:(unsigned char)arg0 ;


@end


#endif