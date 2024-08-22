// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSBRANDMANAGER_H
#define BSBRANDMANAGER_H


#import <Foundation/Foundation.h>

#import "BSBrandManagerObjcShim.h"

@interface BSBrandManager : NSObject {
    BSBrandManagerObjcShim *_shim;
}




-(id)initWithCachingEnabled:(BOOL)arg0 cacheURL:(id)arg1 brandDataSourceOpaqueWrapper:(id)arg2 ;
-(void)brandWithURI:(id)arg0 completion:(id)arg1 ;


@end


#endif