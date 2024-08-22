// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDVIEWACCESSTOKEN_H
#define GDVIEWACCESSTOKEN_H

@class NSString, NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDViewAccessToken : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *tableName; // ivar: _tableName
@property (readonly, nonatomic) NSData *token; // ivar: _token
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithToken:(id)arg0 url:(id)arg1 tableName:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif