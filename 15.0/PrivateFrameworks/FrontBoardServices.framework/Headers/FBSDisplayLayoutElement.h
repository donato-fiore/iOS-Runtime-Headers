// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSDISPLAYLAYOUTELEMENT_H
#define FBSDISPLAYLAYOUTELEMENT_H

@class NSString, BSMutableSettings;
@protocol NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding, FBSDisplayLayoutElement;

#import <Foundation/Foundation.h>


@interface FBSDisplayLayoutElement : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding, FBSDisplayLayoutElement>



@property (nonatomic, getter=isUIApplicationElement) BOOL UIApplicationElement; // ivar: _application
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fillsDisplayBounds; // ivar: _fillsDisplayBounds
@property (nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) BOOL hasKeyboardFocus; // ivar: _keyboardFocus
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger level; // ivar: _level
@property (readonly, copy, nonatomic) BSMutableSettings *otherSettings; // ivar: _otherSettings
@property (nonatomic) CGRect referenceFrame; // ivar: _referenceFrame
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(Class)fallbackXPCEncodableClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif