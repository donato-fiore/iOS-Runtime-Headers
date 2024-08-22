// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMESSAGEHEADERS_H
#define EMMESSAGEHEADERS_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMMessageHeaders : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *headerKeys;
@property (copy, nonatomic) NSDictionary *headers; // ivar: _headers


+(BOOL)supportsSecureCoding;
-(id)firstHeaderForKey:(id)arg0 ;
-(id)headersForKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHeaders:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif