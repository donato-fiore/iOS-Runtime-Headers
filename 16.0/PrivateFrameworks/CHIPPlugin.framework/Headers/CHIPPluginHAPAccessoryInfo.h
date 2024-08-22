// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINHAPACCESSORYINFO_H
#define CHIPPLUGINHAPACCESSORYINFO_H

@class HMFObject, NSMutableDictionary;



@interface CHIPPluginHAPAccessoryInfo : HMFObject

@property (retain, nonatomic) NSMutableDictionary *accessoryInfoDictionary; // ivar: _accessoryInfoDictionary


-(id)accessoryInfoForEndpoint:(id)arg0 ;
-(id)attributeDescriptions;
-(id)categoriesForEndpoint:(id)arg0 ;
-(id)init;
-(id)initWithType:(id)arg0 ;
-(id)serviceDescriptionsForEndpoint:(id)arg0 ;
-(void)setAccessoryInfo:(id)arg0 forEndpoint:(id)arg1 ;


@end


#endif