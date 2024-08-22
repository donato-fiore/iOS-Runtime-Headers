// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFNAMINGCOMPONENTS_H
#define HFNAMINGCOMPONENTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HFNamingComponents : NSObject

@property (nonatomic) BOOL allowsEmptyNameTextField; // ivar: _allowsEmptyNameTextField
@property (nonatomic) BOOL allowsNullResettableName; // ivar: _allowsNullResettableName
@property (readonly, nonatomic) NSString *defaultName;
@property (readonly, nonatomic) id *homeKitObject; // ivar: _homeKitObject
@property (nonatomic) BOOL isAccessory; // ivar: _isAccessory
@property (nonatomic) BOOL isChildService; // ivar: _isChildService
@property (nonatomic) BOOL isDiscoveredAccessory; // ivar: _isDiscoveredAccessory
@property (nonatomic) BOOL isMediaAccessoryOrStereoPair; // ivar: _isMediaAccessoryOrStereoPair
@property (nonatomic) BOOL isService; // ivar: _isService
@property (nonatomic) BOOL isServiceGroup; // ivar: _isServiceGroup
@property (nonatomic) BOOL isTelevision; // ivar: _isTelevision
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *placeholderText;
@property (readonly, nonatomic) NSString *textFieldDisplayText;


+(id)namingComponentFromAccessory:(id)arg0 ;
+(id)namingComponentFromDiscoveredAccessory:(id)arg0 ;
+(id)namingComponentFromHomeKitObject:(id)arg0 ;
+(id)namingComponentFromMediaSystem:(id)arg0 ;
+(id)namingComponentFromService:(id)arg0 ;
+(id)namingComponentFromServiceGroup:(id)arg0 ;
-(id)categoryName;
-(id)commitableNameForString:(id)arg0 ;
-(id)configuredName;
-(id)description;
-(id)homeKitSafeStringForString:(id)arg0 ;
-(id)initWithHomeKitObject:(id)arg0 ;
-(id)roomName;


@end


#endif