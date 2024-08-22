// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFVASREQUEST_H
#define NFVASREQUEST_H

@class NSData, NSString, NSURL, NSNumber;

#import <Foundation/Foundation.h>


@interface NFVASRequest : NSObject

@property (retain, nonatomic) NSData *filter; // ivar: _filter
@property (retain, nonatomic) NSString *merchantId; // ivar: _merchantId
@property (retain, nonatomic) NSURL *signupUrl; // ivar: _signupUrl
@property (retain, nonatomic) NSNumber *terminalCap; // ivar: _terminalCap
@property (retain, nonatomic) NSNumber *terminalProtocol; // ivar: _terminalProtocol


+(BOOL)validateDictionary:(id)arg0 ;
-(id)asDictionary;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif