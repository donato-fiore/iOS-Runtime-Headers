// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXINPROCESSCALLSOURCE_H
#define CXINPROCESSCALLSOURCE_H

@class NSString, NSURL;


#import "CXCallSource.h"
#import "CXInProcessProvider.h"

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}


@property (retain, nonatomic) CXInProcessProvider *provider; // ivar: _provider


-(BOOL)isPermittedToUsePrivateAPI;
-(BOOL)isPermittedToUsePublicAPI;
-(id)bundleIdentifier;
-(id)bundleURL;
-(id)initWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)localizedName;
-(id)vendorProtocolDelegate;
-(int)processIdentifier;
-(struct ? )auditToken;


@end


#endif