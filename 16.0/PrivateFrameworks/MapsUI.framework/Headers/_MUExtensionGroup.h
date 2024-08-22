// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MUEXTENSIONGROUP_H
#define _MUEXTENSIONGROUP_H

@class NSMutableArray, geo_isolater, NSString, GEOAppleMediaServicesResult, _MXExtension;

#import <Foundation/Foundation.h>


@interface _MUExtensionGroup : NSObject {
    NSMutableArray *_extensions;
    geo_isolater *_extensionsLock;
}


@property (readonly, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (retain, nonatomic) GEOAppleMediaServicesResult *appStoreApp; // ivar: _appStoreApp
@property (readonly, nonatomic) _MXExtension *bestExtensionToUse;


-(id)initWithAppIdentifier:(id)arg0 ;
-(void)addExtensionIfMatchedAppIdentifier:(id)arg0 ;


@end


#endif