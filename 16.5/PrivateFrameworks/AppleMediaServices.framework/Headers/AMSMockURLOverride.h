// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMOCKURLOVERRIDE_H
#define AMSMOCKURLOVERRIDE_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AMSObservable.h"
#import "AMSMockURLResponse.h"

@interface AMSMockURLOverride : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableArray *comparators; // ivar: _comparators
@property (retain, nonatomic) AMSObservable *executedObservable; // ivar: _executedObservable
@property (retain, nonatomic) AMSMockURLResponse *response; // ivar: _response


+(id)overrideWithHost:(id)arg0 usingResponse:(id)arg1 ;
+(id)overrideWithPathComponent:(id)arg0 usingResponse:(id)arg1 ;
+(id)overrideWithURLRegex:(id)arg0 usingResponse:(id)arg1 ;
-(BOOL)shouldOverrideURLRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_withURLMatchingHost:(id)arg0 containingPath:(id)arg1 queryItems:(id)arg2 ;
// -(void)withHTTPBodyValidation:(id)arg0 encoding:(unk)arg1  ;
-(void)withResponse:(id)arg0 ;
-(void)withURLContainingPath:(id)arg0 ;
-(void)withURLMatchingHost:(id)arg0 ;
-(void)withURLQueryItems:(id)arg0 ;
-(void)withURLRegexValidation:(id)arg0 ;


@end


#endif