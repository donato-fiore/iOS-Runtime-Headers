// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GPAPPCAPABILITIES_H
#define GPAPPCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface GPAppCapabilities : NSObject {
    ? task;
    ? $__lazy_storage_$_managedConfigurationObserver;
    ? $__lazy_storage_$_supportsSharePlay;
    ? $__lazy_storage_$_supportsStartFromApp;
}


@property (nonatomic) BOOL supportsSharePlay;
@property (nonatomic) BOOL supportsStartFromApp;


-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 ;


@end


#endif