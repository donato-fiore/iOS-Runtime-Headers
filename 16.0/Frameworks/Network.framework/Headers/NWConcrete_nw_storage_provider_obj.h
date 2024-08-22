// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_STORAGE_PROVIDER_OBJ_H
#define NWCONCRETE_NW_STORAGE_PROVIDER_OBJ_H

@class NSString;
@protocol OS_nw_storage_provider_obj;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_storage_provider_obj : NSObject <OS_nw_storage_provider_obj>

 {
    nw_storage_provider callbacks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif