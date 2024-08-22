// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSHORTCUTACTIONMODEL_H
#define HMDSHORTCUTACTIONMODEL_H

@class NSData, NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDActionModel.h"

@interface HMDShortcutActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>



@property (retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)backedObjectClass;
+(Class)cd_entityClass;
+(id)properties;
-(void)loadModelWithActionInformation:(id)arg0 ;


@end


#endif