// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYREPRESENTABLETRANSFORMITEM_H
#define HFACCESSORYREPRESENTABLETRANSFORMITEM_H

@class NSString;
@protocol HFAccessoryRepresentableItem, HFHomeKitObject;


#import "HFTransformItem.h"

@interface HFAccessoryRepresentableTransformItem : HFTransformItem <HFAccessoryRepresentableItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;


+(id)itemWithAccessoryRepresentableObject:(id)arg0 valueSource:(id)arg1 ;
-(id)accessoryRepresentableObject;


@end


#endif