// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMOMENTSHARESTATUSMOCK_H
#define PXMOMENTSHARESTATUSMOCK_H

@protocol PXDisplayMomentShare;


#import "PXMomentShareStatus.h"
#import "_PXMomentShareMockMomentShare.h"

@interface PXMomentShareStatusMock : PXMomentShareStatus {
    id<PXDisplayMomentShare> *_originalMomentShare;
    _PXMomentShareMockMomentShare *_mockMomentShare;
}




+(BOOL)shouldUseMockStatus;
-(id)_actionManager;
-(id)initWithMomentShare:(id)arg0 ;
-(id)owner;
-(void)_updateStatus;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif