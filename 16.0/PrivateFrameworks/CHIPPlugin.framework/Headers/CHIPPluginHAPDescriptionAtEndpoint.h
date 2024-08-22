// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINHAPDESCRIPTIONATENDPOINT_H
#define CHIPPLUGINHAPDESCRIPTIONATENDPOINT_H

@class HMFObject, NSArray;



@interface CHIPPluginHAPDescriptionAtEndpoint : HMFObject

@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (retain, nonatomic) NSArray *serviceDescriptions; // ivar: _serviceDescriptions


-(id)attributeDescriptions;
-(id)getCategories;
-(id)getServiceDescriptions;
-(id)init;
-(id)initWithType:(id)arg0 serviceDescriptions:(id)arg1 ;


@end


#endif