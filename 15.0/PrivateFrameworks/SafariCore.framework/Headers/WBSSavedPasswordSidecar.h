// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSAVEDPASSWORDSIDECAR_H
#define WBSSAVEDPASSWORDSIDECAR_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "WBSTOTPGenerator.h"

@interface WBSSavedPasswordSidecar : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *host; // ivar: _host
@property (retain, nonatomic) NSDictionary *originalKeychainDictionary; // ivar: _originalKeychainDictionary
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator; // ivar: _totpGenerator
@property (copy, nonatomic) NSString *user; // ivar: _user


-(id)initWithUser:(id)arg0 host:(id)arg1 ;
-(id)initWithUser:(id)arg0 host:(id)arg1 data:(id)arg2 ;


@end


#endif