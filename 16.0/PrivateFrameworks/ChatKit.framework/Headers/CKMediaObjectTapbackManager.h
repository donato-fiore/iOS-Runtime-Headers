// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMEDIAOBJECTTAPBACKMANAGER_H
#define CKMEDIAOBJECTTAPBACKMANAGER_H

@class NSString, UIView<CKGradientReferenceView>;
@protocol PXTapbackStatusManager;

#import <Foundation/Foundation.h>

#import "CKAggregateAttachmentMessagePartChatItem.h"

@interface CKMediaObjectTapbackManager : NSObject <PXTapbackStatusManager>



@property (retain, nonatomic) CKAggregateAttachmentMessagePartChatItem *chatItem; // ivar: _chatItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class decorationViewClass;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView; // ivar: _gradientReferenceView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invertTapbackTailDirection; // ivar: _invertTapbackTailDirection
@property (nonatomic) BOOL originatedFromGridView; // ivar: _originatedFromGridView
@property (readonly) Class superclass;


-(BOOL)hasTapbacksForAsset:(id)arg0 ;
-(id)tapbackUserDataForAsset:(id)arg0 previousAsset:(id)arg1 ;


@end


#endif