// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PEADJUSTMENTDATACACHEENTRY_H
#define PEADJUSTMENTDATACACHEENTRY_H

@class PICompositionController, NSString;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface PEAdjustmentDataCacheEntry : NSObject

@property (retain) PICompositionController *compositionController; // ivar: _compositionController
@property NSInteger disposition; // ivar: _disposition
@property (retain) NSString *editorBundleID; // ivar: _editorBundleID
@property (retain) NSObject<OS_dispatch_group> *group; // ivar: _group
@property CGSize inputSize; // ivar: _inputSize


-(id)initWithAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 originalAdjustmentData:(BOOL)arg2 ;
-(void)_load:(id)arg0 networkAccessAllowed:(BOOL)arg1 originalAdjustmentData:(BOOL)arg2 ;
-(void)deliverOn:(id)arg0 completion:(id)arg1 ;


@end


#endif