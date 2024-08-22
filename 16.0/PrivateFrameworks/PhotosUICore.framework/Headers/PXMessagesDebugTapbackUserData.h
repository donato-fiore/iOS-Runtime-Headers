// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMESSAGESDEBUGTAPBACKUSERDATA_H
#define PXMESSAGESDEBUGTAPBACKUSERDATA_H

@class NSString;
@protocol PXTapbackUserData, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXMessagesDebugTapbackUserData : NSObject <PXTapbackUserData>



@property (retain, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldAnimate; // ivar: _shouldAnimate
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif