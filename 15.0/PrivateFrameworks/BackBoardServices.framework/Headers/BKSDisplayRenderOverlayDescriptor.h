// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSDISPLAYRENDEROVERLAYDESCRIPTOR_H
#define BKSDISPLAYRENDEROVERLAYDESCRIPTOR_H

@class NSString, CADisplay;
@protocol NSSecureCoding, BSDescriptionProviding, BKSDisplayRenderOverlayDescribing;

#import <Foundation/Foundation.h>

#import "BKSDisplayProgressIndicatorProperties.h"

@interface BKSDisplayRenderOverlayDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, BKSDisplayRenderOverlayDescribing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CADisplay *display; // ivar: _display
@property (copy, nonatomic) NSString *displayUUID; // ivar: _displayUUID
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic, getter=isInterstitial, setter=_setInterstitial:) BOOL interstitial; // ivar: _interstitial
@property (nonatomic) BOOL lockBacklight; // ivar: _lockBacklight
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties; // ivar: _progressIndicatorProperties
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_classesRequiredToDecode;
+(id)descriptorWithName:(id)arg0 display:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithName:(id)arg0 displayUUID:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 display:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif