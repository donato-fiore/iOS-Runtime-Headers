// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUPGRADEIOSTERMSRESPONSE_H
#define AAUPGRADEIOSTERMSRESPONSE_H

@class NSData;


#import "AAResponse.h"

@interface AAUpgradeiOSTermsResponse : AAResponse

@property (readonly, nonatomic) NSData *xmlUIData; // ivar: _xmlUIData


-(BOOL)bodyIsPlist;
-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;
-(id)responseXMLData;


@end


#endif