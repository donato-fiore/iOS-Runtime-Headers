// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSEXTENSIONENDPOINTCONFIGURATION_H
#define CMSEXTENSIONENDPOINTCONFIGURATION_H

@class NSURL, NSDictionary, NSMutableURLRequest;

#import <Foundation/Foundation.h>


@interface CMSExtensionEndpointConfiguration : NSObject

@property (retain, nonatomic) NSURL *endpointURL; // ivar: _endpointURL
@property (readonly, nonatomic) NSDictionary *groupHeaders; // ivar: _groupHeaders
@property (readonly, nonatomic) NSDictionary *headers; // ivar: _headers
@property (retain, nonatomic) NSMutableURLRequest *request; // ivar: _request


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 endpoint:(id)arg1 baseURL:(id)arg2 groupHeaders:(id)arg3 ;


@end


#endif