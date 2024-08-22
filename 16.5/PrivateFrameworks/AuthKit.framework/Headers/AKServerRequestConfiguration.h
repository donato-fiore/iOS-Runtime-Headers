// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKSERVERREQUESTCONFIGURATION_H
#define AKSERVERREQUESTCONFIGURATION_H

@class NSURLRequest, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AKAppleIDServerResourceLoadDelegate.h"

@interface AKServerRequestConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger presentationType; // ivar: _presentationType
@property (retain, nonatomic) NSURLRequest *request; // ivar: _request
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (retain, nonatomic) AKAppleIDServerResourceLoadDelegate *resourceLoadDelegate; // ivar: _resourceLoadDelegate
@property (copy, nonatomic) NSArray *whitelistedPathURLs; // ivar: _whitelistedPathURLs


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequest:(id)arg0 requestType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif