// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCATALOG_H
#define SHCATALOG_H


#import <Foundation/Foundation.h>

#import "SHCatalogConfiguration.h"

@interface SHCatalog : NSObject

@property (readonly, copy, nonatomic) SHCatalogConfiguration *_configuration; // ivar: __configuration
@property (readonly, nonatomic) CGFloat maximumQuerySignatureDuration;
@property (readonly, nonatomic) CGFloat minimumQuerySignatureDuration;


+(BOOL)_validateInstallationID:(id)arg0 ;
-(id)_createMatcher;
-(id)_createSessionDriver;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;


@end


#endif