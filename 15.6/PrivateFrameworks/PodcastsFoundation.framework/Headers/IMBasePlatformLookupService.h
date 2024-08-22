// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMBASEPLATFORMLOOKUPSERVICE_H
#define IMBASEPLATFORMLOOKUPSERVICE_H

@class NSString;


#import "IMBaseStoreService.h"

@interface IMBasePlatformLookupService : IMBaseStoreService

@property (retain, nonatomic) NSString *protocolVersion; // ivar: _protocolVersion


-(id)baseUrl;
-(id)init;
-(id)platformAction;
-(id)urlRequest;
-(void)performRequest:(id)arg0 ;


@end


#endif