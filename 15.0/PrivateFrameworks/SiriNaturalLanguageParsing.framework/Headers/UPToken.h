// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPTOKEN_H
#define UPTOKEN_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UPToken : NSObject <NSCopying>



@property (readonly) BOOL isWhitespace; // ivar: _isWhitespace
@property (readonly) _NSRange range; // ivar: _range
@property (readonly, copy) NSString *string; // ivar: _string


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToToken:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 range:(struct _NSRange )arg1 isWhitespace:(BOOL)arg2 ;


@end


#endif