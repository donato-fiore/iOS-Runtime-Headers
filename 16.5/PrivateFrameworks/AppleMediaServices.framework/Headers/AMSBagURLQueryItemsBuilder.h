// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAGURLQUERYITEMSBUILDER_H
#define AMSBAGURLQUERYITEMSBUILDER_H


#import <Foundation/Foundation.h>


@interface AMSBagURLQueryItemsBuilder : NSObject {
    ? clientInfo;
    ? profile;
    ? profileVersion;
    ? operatingSystem;
    ? operatingSystemVersion;
    ? deviceClass;
    ? buildVariant;
}




+(id)storefrontFromQueryItems:(id)arg0 ;
-(id)init;
-(id)initWithClientInfo:(id)arg0 profile:(id)arg1 profileVersion:(id)arg2 ;
-(id)initWithClientInfo:(id)arg0 profile:(id)arg1 profileVersion:(id)arg2 operatingSystem:(id)arg3 operatingSystemVersion:(id)arg4 deviceClass:(id)arg5 buildVariant:(id)arg6 ;
-(id)queryItemsWithCookies:(id)arg0 storefront:(id)arg1 ;


@end


#endif