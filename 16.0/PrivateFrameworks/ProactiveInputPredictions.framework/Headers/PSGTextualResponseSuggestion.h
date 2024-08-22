// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGTEXTUALRESPONSESUGGESTION_H
#define PSGTEXTUALRESPONSESUGGESTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PSGTextualResponseSuggestion : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *responseCategory; // ivar: _responseCategory
@property (readonly, nonatomic) NSString *responseText; // ivar: _responseText


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextualSuggestion:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 category:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif