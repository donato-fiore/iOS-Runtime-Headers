// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSLOCALWEBRESULTBUILDER_H
#define SSLOCALWEBRESULTBUILDER_H

@class NSString, NSURL;


#import "SSResultBuilder.h"

@interface SSLocalWebResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *formattedUrlString; // ivar: _formattedUrlString
@property (retain, nonatomic) NSString *siteName; // ivar: _siteName
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsResult:(id)arg0 ;
+(id)stringWithUrlString:(id)arg0 ;
-(id)buildDescriptions;
-(id)buildResult;
-(id)initWithResult:(id)arg0 ;


@end


#endif