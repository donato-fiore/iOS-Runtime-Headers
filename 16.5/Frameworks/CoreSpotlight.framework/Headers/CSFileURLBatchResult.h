// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSFILEURLBATCHRESULT_H
#define CSFILEURLBATCHRESULT_H

@class NSError, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CSFileURLBatchResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 andError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif