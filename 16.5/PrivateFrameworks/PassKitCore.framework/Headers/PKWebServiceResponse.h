// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWEBSERVICERESPONSE_H
#define PKWEBSERVICERESPONSE_H

@class NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKWebServiceResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) id *JSONObject; // ivar: _JSONObject
@property (readonly, nonatomic) NSDictionary *headers; // ivar: _headers
@property (readonly, nonatomic) NSData *rawData; // ivar: _rawData


+(BOOL)jsonDataOptional;
+(BOOL)supportsSecureCoding;
+(id)responseWithData:(id)arg0 ;
+(id)responseWithData:(id)arg0 headers:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 headers:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif