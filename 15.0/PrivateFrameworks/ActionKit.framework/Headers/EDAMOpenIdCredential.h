// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMOPENIDCREDENTIAL_H
#define EDAMOPENIDCREDENTIAL_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMOpenIdCredential : FATObject

@property (retain, nonatomic) NSNumber *serviceProvider; // ivar: _serviceProvider
@property (retain, nonatomic) NSString *tokenPayload; // ivar: _tokenPayload


+(id)structFields;
+(id)structName;


@end


#endif