// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDEVICEDETAILSCONTENTITEM_H
#define WFDEVICEDETAILSCONTENTITEM_H

@class WFContentItem, WFDevice;
@protocol WFContentItemClass;



@interface WFDeviceDetailsContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFDevice *device;


+(id)contentCategories;
+(id)countDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(id)screenHeight;
-(id)screenWidth;


@end


#endif