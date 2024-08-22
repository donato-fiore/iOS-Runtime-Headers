// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCHARACTERISTICEVENTUNKNOWNITEM_H
#define HUCHARACTERISTICEVENTUNKNOWNITEM_H

@class HFItem, NSString, NSSet;
@protocol HFServiceVendor;



@interface HUCharacteristicEventUnknownItem : HFItem <HFServiceVendor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;


-(id)accessories;


@end


#endif