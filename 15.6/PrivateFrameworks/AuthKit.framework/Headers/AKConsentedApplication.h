// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKCONSENTEDAPPLICATION_H
#define AKCONSENTEDAPPLICATION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKConsentedApplication : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain, nonatomic) NSString *origin; // ivar: _origin
@property (retain, nonatomic) NSString *primaryClientID; // ivar: _primaryClientID
@property (copy, nonatomic) NSArray *scopes; // ivar: _scopes
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSString *transferState; // ivar: _transferState


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif