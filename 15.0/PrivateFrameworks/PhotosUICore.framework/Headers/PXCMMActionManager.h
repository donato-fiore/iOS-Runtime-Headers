// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMACTIONMANAGER_H
#define PXCMMACTIONMANAGER_H

@class NSMutableDictionary;
@protocol PXCMMActionPerformerDelegate;

#import <Foundation/Foundation.h>


@interface PXCMMActionManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *performerClassByType; // ivar: _performerClassByType
@property (weak, nonatomic) NSObject<PXCMMActionPerformerDelegate> *performerDelegate; // ivar: _performerDelegate


-(Class)actionPerformerClassForActionType:(id)arg0 ;
-(id)actionPerformerForActionType:(id)arg0 ;
-(id)init;
-(id)messageComposeActionPerformer;
-(id)photosPickerActionPerformer;
-(id)publishActionPerformer;
-(id)sendBackActionPerformer;


@end


#endif