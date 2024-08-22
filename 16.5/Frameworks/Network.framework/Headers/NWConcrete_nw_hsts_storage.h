// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_HSTS_STORAGE_H
#define NWCONCRETE_NW_HSTS_STORAGE_H

@class _NSHSTSStorage, NSString;
@protocol OS_nw_hsts_storage;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_hsts_storage : NSObject <OS_nw_hsts_storage>

 {
    _NSHSTSStorage *HSTSStorage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif