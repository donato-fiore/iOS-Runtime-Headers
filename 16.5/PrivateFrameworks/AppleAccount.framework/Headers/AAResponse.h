// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AARESPONSE_H
#define AARESPONSE_H

@class NSData, NSError, NSHTTPURLResponse, NSNumber, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AAResponse : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSHTTPURLResponse *httpResponse; // ivar: _httpResponse
@property (readonly, nonatomic) NSNumber *maxAge; // ivar: _maxAge
@property (readonly, nonatomic) NSString *protocolVersion;
@property (readonly, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode


-(id)_deviceSpecificLocalizedString:(id)arg0 ;
-(id)_stringWithDescriptionForResponseError:(id)arg0 ;
-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;
-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 bodyIsPlist:(BOOL)arg2 ;
-(void)_parseJSONResponse:(id)arg0 ;
-(void)_parsePlistResponse:(id)arg0 ;


@end


#endif