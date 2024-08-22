// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCINTERNALAUTHENTICATIONRESPONSE_H
#define BCINTERNALAUTHENTICATIONRESPONSE_H

@class NSString, NSArray, NSDictionary;
@protocol BCDictionarySerializable;

#import <Foundation/Foundation.h>

#import "BCError.h"

@interface BCInternalAuthenticationResponse : NSObject <BCDictionarySerializable>

 {
    NSString *_status;
    NSString *_businessIdentifier;
    NSString *_groupIdentifier;
    NSString *_credentials;
    NSArray *_errors;
}


@property (readonly, nonatomic) NSString *businessIdentifier;
@property (readonly, nonatomic) NSString *credentials;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) BCError *error;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *status;


-(id)initWithBusinessIdentifier:(id)arg0 groupIdentifier:(id)arg1 credentials:(id)arg2 error:(id)arg3 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)responseMessageFor:(id)arg0 message:(id)arg1 ;


@end


#endif