// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMESSAGESSTACKPLAYBACKCONTROLUSERDATA_H
#define PXMESSAGESSTACKPLAYBACKCONTROLUSERDATA_H

@class NSString;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>

#import "PXMessagesStackPlaybackControlViewModel.h"

@interface PXMessagesStackPlaybackControlUserData : NSObject <PXGViewUserData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger itemIndex; // ivar: _itemIndex
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXMessagesStackPlaybackControlViewModel *viewModel; // ivar: _viewModel


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithItemIndex:(NSInteger)arg0 viewModel:(id)arg1 ;


@end


#endif