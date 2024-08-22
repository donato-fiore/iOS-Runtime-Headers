// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHAPPLICATIONWIDGETCOLLECTION_H
#define SBHAPPLICATIONWIDGETCOLLECTION_H

@class NSArray, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBLeafIcon.h"

@interface SBHApplicationWidgetCollection : NSObject <BSDescriptionProviding>



@property (retain, nonatomic) NSArray *avocadoDescriptors; // ivar: _avocadoDescriptors
@property (readonly, nonatomic) NSString *collectionIdentifier; // ivar: _collectionIdentifier
@property (copy, nonatomic) NSString *containerName; // ivar: _containerName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBLeafIcon *icon; // ivar: _icon
@property (copy, nonatomic) NSString *iconImageApplicationBundleIdentifier; // ivar: _iconImageApplicationBundleIdentifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *vendorName; // ivar: _vendorName


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIcon:(id)arg0 galleryItems:(id)arg1 vendorName:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif