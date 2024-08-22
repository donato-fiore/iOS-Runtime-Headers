// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUASSETSHAREDVIEWMODELCHANGE_H
#define PUASSETSHAREDVIEWMODELCHANGE_H



#import "PUViewModelChange.h"

@interface PUAssetSharedViewModelChange : PUViewModelChange

@property (nonatomic) BOOL deferredProcessingNeededChanged; // ivar: _deferredProcessingNeededChanged
@property (nonatomic) BOOL flippingFullSizeRenderStateChanged; // ivar: _flippingFullSizeRenderStateChanged
@property (nonatomic) BOOL loadingStatusChanged; // ivar: _loadingStatusChanged
@property (nonatomic) BOOL needsDeferredProcessingChanged; // ivar: _needsDeferredProcessingChanged
@property (nonatomic) BOOL saveProgressChanged; // ivar: _saveProgressChanged
@property (nonatomic) BOOL saveStateChanged; // ivar: _saveStateChanged


-(BOOL)hasChanges;


@end


#endif