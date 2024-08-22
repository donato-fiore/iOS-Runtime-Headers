// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSERVERSIDEOAUTH2RESPONSE_H
#define BCSERVERSIDEOAUTH2RESPONSE_H

@class NSDictionary;
@protocol BCOAuth2ResponseProtocol;

#import <Foundation/Foundation.h>

#import "BCError.h"

@interface BCServerSideOAuth2Response : NSObject <BCOAuth2ResponseProtocol>



@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (retain, nonatomic) BCError *error; // ivar: _error
@property (nonatomic) NSInteger status; // ivar: _status


-(id)_initWithDictionary:(id)arg0 ;
-(id)initWithRedirectURI:(id)arg0 ;


@end


#endif