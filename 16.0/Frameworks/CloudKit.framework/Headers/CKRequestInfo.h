// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKREQUESTINFO_H
#define CKREQUESTINFO_H

@class NSString, NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKRequestInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *operationClassName; // ivar: _operationClassName
@property (retain, nonatomic) NSArray *requestOperations; // ivar: _requestOperations
@property (readonly, copy, nonatomic) NSString *requestUUID; // ivar: _requestUUID
@property (readonly, copy, nonatomic) NSDictionary *responseHTTPHeaders; // ivar: _responseHTTPHeaders
@property (readonly, copy, nonatomic) NSDictionary *w3cNavigationTiming; // ivar: _w3cNavigationTiming


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestUUID:(id)arg0 responseHTTPHeaders:(id)arg1 w3cTiming:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif