// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTHIRDPARTYLINK_H
#define GEOTHIRDPARTYLINK_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface GEOThirdPartyLink : NSObject

@property (readonly, nonatomic) NSString *adamID; // ivar: _adamID
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)thirdPartyLinkFromProto:(id)arg0 ;
-(id)initWithAdamID:(id)arg0 url:(id)arg1 ;


@end


#endif