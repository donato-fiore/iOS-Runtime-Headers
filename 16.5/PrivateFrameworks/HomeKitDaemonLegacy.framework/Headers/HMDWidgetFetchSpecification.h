// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDWIDGETFETCHSPECIFICATION_H
#define HMDWIDGETFETCHSPECIFICATION_H

@class HMFObject, NSSet, NSString;



@interface HMDWidgetFetchSpecification : HMFObject

@property (readonly, copy) NSSet *affectedWidgetKinds; // ivar: _affectedWidgetKinds
@property (readonly, copy) NSSet *associatedServiceTypes; // ivar: _associatedServiceTypes
@property (readonly, copy) NSString *characteristicType; // ivar: _characteristicType
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSSet *serviceTypes; // ivar: _serviceTypes


+(id)allHomeWidgetKinds;
+(id)allOtherHomesSingleAccessorySecurityFetchSpecifications;
+(id)lightsFetchSpecifications;
+(id)mainHomeSecurityFetchSpecifications;
-(id)attributeDescriptions;
-(id)initWithName:(id)arg0 serviceTypes:(id)arg1 associatedServiceTypes:(id)arg2 characteristicType:(id)arg3 affectedWidgetKinds:(id)arg4 ;


@end


#endif