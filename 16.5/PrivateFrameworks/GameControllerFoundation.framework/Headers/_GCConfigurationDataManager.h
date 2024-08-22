// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCCONFIGURATIONDATAMANAGER_H
#define _GCCONFIGURATIONDATAMANAGER_H

@class NSMutableDictionary, NSString;
@protocol NSObject, GCServiceProvider, OS_dispatch_workloop;

#import <Foundation/Foundation.h>


@interface _GCConfigurationDataManager : NSObject <NSObject>

 {
    id<GCServiceProvider> *_provider;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSMutableDictionary *_locators;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)configurationBundleLocatorForType:(id)arg0 ;
-(id)init;
-(id)initWithProvider:(id)arg0 ;
-(id)serviceFor:(id)arg0 client:(id)arg1 ;


@end


#endif