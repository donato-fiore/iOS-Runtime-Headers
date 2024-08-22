// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKRESOURCELOADSTATISTICSFIRSTPARTY_H
#define _WKRESOURCELOADSTATISTICSFIRSTPARTY_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKResourceLoadStatisticsFirstParty : NSObject <WKObject>

 {
    ObjectStorage<API::ResourceLoadStatisticsFirstParty> _firstParty;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *firstPartyDomain;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL thirdPartyStorageAccessGranted; // ivar: _thirdPartyStorageAccessGranted
@property (readonly, nonatomic) CGFloat timeLastUpdated;


-(BOOL)storageAccess;
-(void)dealloc;


@end


#endif