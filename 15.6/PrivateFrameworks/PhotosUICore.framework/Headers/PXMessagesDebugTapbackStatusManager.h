// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMESSAGESDEBUGTAPBACKSTATUSMANAGER_H
#define PXMESSAGESDEBUGTAPBACKSTATUSMANAGER_H

@class NSString;
@protocol PXTapbackStatusManager;

#import <Foundation/Foundation.h>


@interface PXMessagesDebugTapbackStatusManager : NSObject <PXTapbackStatusManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class decorationViewClass;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasTapbacksForAsset:(id)arg0 ;
-(id)tapbackUserDataForAsset:(id)arg0 previousAsset:(id)arg1 ;


@end


#endif