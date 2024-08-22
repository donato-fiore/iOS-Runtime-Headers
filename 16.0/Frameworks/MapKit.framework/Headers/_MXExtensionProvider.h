// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MXEXTENSIONPROVIDER_H
#define _MXEXTENSIONPROVIDER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_MXAssetStorage.h"
#import "_MXExtensionDispatchCenter.h"
#import "_MXExtensionMatchingMerger.h"
#import "_MXExtensionServiceCenter.h"

@interface _MXExtensionProvider : NSObject {
    Class _extensionMatchingClass;
    id *_matchingContext;
    id *_intentNonUIMatchingContext;
    id *_intentUIMatchingContext;
    NSArray *_blacklistedExtensions;
    NSArray *_blacklistedContainingApplications;
}


@property (retain, nonatomic) _MXAssetStorage *assetStorage; // ivar: _assetStorage
@property (retain, nonatomic) _MXExtensionDispatchCenter *dispatchCenter; // ivar: _dispatchCenter
@property (retain, nonatomic) _MXExtensionMatchingMerger *merger; // ivar: _merger
@property (retain, nonatomic) _MXExtensionServiceCenter *serviceCenter; // ivar: _serviceCenter


+(id)sharedProvider;
-(BOOL)_disableExtension:(id)arg0 error:(*id)arg1 ;
-(BOOL)_enableExtension:(id)arg0 error:(*id)arg1 ;
-(id)_currentExtensions;
-(id)_extensionWithIdentifier:(id)arg0 ;
-(id)_extensionsByFilteringBlacklistedExtensionsFromArray:(id)arg0 ;
-(id)_intentClassFilter:(id)arg0 ;
-(id)addExtensionsUpdateHandler:(id)arg0 ;
-(id)init;
-(id)siblingExtensionsWithContainingAppIdentifer:(id)arg0 ;
-(void)_beginMatchingExtensionsIfNeeded;
-(void)_endMatchingExtensionsIfNeeded;
-(void)_restartMatchingExtensionsForDefaultsChange;
-(void)dealloc;
-(void)imageForKey:(id)arg0 completion:(id)arg1 ;
-(void)imageForKey:(id)arg0 extension:(id)arg1 completion:(id)arg2 ;
-(void)loadImageForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)removeExtensionUpdateHandler:(id)arg0 ;


@end


#endif