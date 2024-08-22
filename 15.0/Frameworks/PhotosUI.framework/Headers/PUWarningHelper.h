// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUWARNINGHELPER_H
#define PUWARNINGHELPER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PUWarningHelper : NSObject

@property (retain, nonatomic, setter=_setAssets:) NSArray *_assets; // ivar: __assets


+(id)_suffix:(id)arg0 ;
// +(id)alertControllerForAssets:(id)arg0 inCollection:(id)arg1 cancelAction:(id)arg2 removeAction:(unk)arg3 removeFromSharedLibraryAction:(id)arg4 deleteAction:(unk)arg5  ;
+(id)getCombinedRemovalDeletionWarningMessageForAssets:(id)arg0 canRemoveFromSharedLibrary:(BOOL)arg1 removeFromSharedLibraryOnly:(BOOL)arg2 ;
+(id)getRemovalWarningMessageForAssets:(id)arg0 removeFromSharedLibraryOnly:(BOOL)arg1 ;


@end


#endif