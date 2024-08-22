// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACHEDELETESERVICEINFO_H
#define CACHEDELETESERVICEINFO_H

@class NSExtensionContext;

#import <Foundation/Foundation.h>


@interface CacheDeleteServiceInfo : NSObject

@property BOOL doNotQuery; // ivar: _doNotQuery
@property (readonly, nonatomic) NSExtensionContext *extensionContext; // ivar: _extensionContext


+(id)serviceInfoWithExtensionContext:(id)arg0 ;
-(id)initWithExtensionContext:(id)arg0 ;


@end


#endif