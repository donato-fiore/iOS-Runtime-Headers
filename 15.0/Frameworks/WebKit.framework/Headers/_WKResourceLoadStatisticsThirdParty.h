// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKRESOURCELOADSTATISTICSTHIRDPARTY_H
#define _WKRESOURCELOADSTATISTICSTHIRDPARTY_H

@class NSString, NSArray;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKResourceLoadStatisticsThirdParty : NSObject <WKObject>

 {
    ObjectStorage<API::ResourceLoadStatisticsThirdParty> _thirdParty;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *thirdPartyDomain;
@property (readonly, nonatomic) NSArray *underFirstParties;


-(void)dealloc;


@end


#endif