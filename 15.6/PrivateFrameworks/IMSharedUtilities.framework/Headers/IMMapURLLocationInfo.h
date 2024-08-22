// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMAPURLLOCATIONINFO_H
#define IMMAPURLLOCATIONINFO_H

@class NSString, CLLocation, NSURL;

#import <Foundation/Foundation.h>


@interface IMMapURLLocationInfo : NSObject

@property (copy, nonatomic) NSString *address; // ivar: _address
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSString *query; // ivar: _query
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)locationInfoFromURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif