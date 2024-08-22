// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKINSPECTORCONFIGURATION_H
#define _WKINSPECTORCONFIGURATION_H

@class NSString;
@protocol WKObject, NSCopying;

#import <Foundation/Foundation.h>

#import "WKProcessPool.h"

@interface _WKInspectorConfiguration : NSObject <WKObject, NSCopying>

 {
    ObjectStorage<API::InspectorConfiguration> _configuration;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WKProcessPool *processPool;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)applyToWebViewConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)setURLSchemeHandler:(id)arg0 forURLScheme:(id)arg1 ;


@end


#endif