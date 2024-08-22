// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFVALUEADDEDSERVICETRANSACTION_H
#define NFVALUEADDEDSERVICETRANSACTION_H

@class NSNumber, NSError, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFValueAddedServiceTransaction : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSNumber *didSucceed; // ivar: _didSucceed
@property (readonly, retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, retain, nonatomic) NSNumber *filter; // ivar: _filter
@property (readonly, retain, nonatomic) NSNumber *filterType; // ivar: _filterType
@property (readonly, retain, nonatomic) NSData *merchantId; // ivar: _merchantId
@property (readonly, retain, nonatomic) NSData *passData; // ivar: _passData
@property (readonly, nonatomic) unsigned int result; // ivar: _result
@property (readonly, retain, nonatomic) NSString *signupUrl; // ivar: _signupUrl
@property (readonly, retain, nonatomic) NSNumber *terminalAppVersion; // ivar: _terminalAppVersion
@property (readonly, retain, nonatomic) NSNumber *terminalMode; // ivar: _terminalMode
@property (readonly, retain, nonatomic) NSData *token; // ivar: _token


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif