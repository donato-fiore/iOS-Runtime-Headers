// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKSETTINGSMODIFICATIONREQUESTOPERATION_H
#define WLKSETTINGSMODIFICATIONREQUESTOPERATION_H

@class NSDictionary;


#import "WLKNetworkRequestOperation.h"

@interface WLKSettingsModificationRequestOperation : WLKNetworkRequestOperation {
    NSDictionary *_modifications;
}




+(id)_requestURL:(*id)arg0 ;
-(id)_postBody;
-(id)initWithModifications:(id)arg0 ;
-(void)prepareURLRequest:(id)arg0 ;


@end


#endif