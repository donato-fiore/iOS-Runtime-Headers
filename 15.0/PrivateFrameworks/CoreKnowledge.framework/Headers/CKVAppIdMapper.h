// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVAPPIDMAPPER_H
#define CKVAPPIDMAPPER_H


#import <Foundation/Foundation.h>


@interface CKVAppIdMapper : NSObject



+(BOOL)isKnownAppId:(id)arg0 ;
+(id)_buildKnownIdentifierToUniversalOriginAppIdMap;
+(id)_getAllKnownAppIds;
+(id)_getKnownAppIdMap;
+(id)convertToUnversalAppId:(id)arg0 ;


@end


#endif