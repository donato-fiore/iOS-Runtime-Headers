// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMOCKURLRESPONSE_H
#define IMMOCKURLRESPONSE_H

@class NSData, NSString, NSHTTPURLResponse;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IMMockURLResponse : NSObject <NSSecureCoding>



@property (retain) NSData *data; // ivar: _data
@property (copy) NSString *mockID; // ivar: _mockID
@property (copy) NSString *requestBodyKeyPath; // ivar: _requestBodyKeyPath
@property (retain) NSHTTPURLResponse *response; // ivar: _response


+(BOOL)supportsSecureCoding;
+(id)objectFromPlist:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif