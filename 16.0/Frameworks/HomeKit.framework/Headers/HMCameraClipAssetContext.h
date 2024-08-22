// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERACLIPASSETCONTEXT_H
#define HMCAMERACLIPASSETCONTEXT_H

@class NSDate, NSDictionary, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCameraClipAssetContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy) NSDictionary *requiredHTTPHeaders; // ivar: _requiredHTTPHeaders
@property (readonly) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 expirationDate:(id)arg1 requiredHTTPHeaders:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif