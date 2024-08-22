// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDEVICEDETAILSCONTENTITEM_H
#define WFDEVICEDETAILSCONTENTITEM_H

@class WFContentItem, NSString, WFDevice;
@protocol WFContentItemClass;



@interface WFDeviceDetailsContentItem : WFContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFDevice *device;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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