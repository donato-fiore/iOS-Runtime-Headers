// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFVASRESPONSE_H
#define NFVASRESPONSE_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>

#import "NFVASRequest.h"

@interface NFVASResponse : NSObject

@property (retain, nonatomic) NSNumber *mobileCapabilities; // ivar: _mobileCapabilities
@property (readonly, nonatomic) BOOL paymentSupported;
@property (retain, nonatomic) NFVASRequest *request; // ivar: _request
@property (retain, nonatomic) NSNumber *statusCode; // ivar: _statusCode
@property (retain, nonatomic) NSData *token; // ivar: _token
@property (retain, nonatomic) NSData *vasData; // ivar: _vasData


+(BOOL)validateDictionary:(id)arg0 ;
-(id)asDictionary;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif