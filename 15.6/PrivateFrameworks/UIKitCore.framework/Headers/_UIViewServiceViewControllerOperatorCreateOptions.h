// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWSERVICEVIEWCONTROLLEROPERATORCREATEOPTIONS_H
#define _UIVIEWSERVICEVIEWCONTROLLEROPERATORCREATEOPTIONS_H

@class NSUUID, NSArray, BSMachPortSendRight, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"

@interface _UIViewServiceViewControllerOperatorCreateOptions : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger availableTextServices; // ivar: _availableTextServices
@property (retain, nonatomic) NSUUID *contextToken; // ivar: _contextToken
@property (copy, nonatomic) NSArray *displayConfigurations; // ivar: _displayConfigurations
@property (retain, nonatomic) BSMachPortSendRight *hostAccessibilityServerPort; // ivar: _hostAccessibilityServerPort
@property (nonatomic) BOOL hostCanDynamicallySpecifySupportedInterfaceOrientations; // ivar: _hostCanDynamicallySpecifySupportedInterfaceOrientations
@property (nonatomic) NSInteger initialInterfaceOrientation; // ivar: _initialInterfaceOrientation
@property (copy, nonatomic) NSArray *serializedAppearanceRepresentations; // ivar: _serializedAppearanceRepresentations
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (copy, nonatomic) NSString *viewControllerClassName; // ivar: _viewControllerClassName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif