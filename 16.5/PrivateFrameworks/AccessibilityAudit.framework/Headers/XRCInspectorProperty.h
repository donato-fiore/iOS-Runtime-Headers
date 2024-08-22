// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRCINSPECTORPROPERTY_H
#define XRCINSPECTORPROPERTY_H

@class NSString;
@protocol XRCInspectorPropertyDelegate;

#import <Foundation/Foundation.h>

#import "AXAuditElement.h"
#import "AXAuditElementAttribute.h"

@interface XRCInspectorProperty : NSObject

@property (weak, nonatomic) NSObject<XRCInspectorPropertyDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) AXAuditElement *element; // ivar: _element
@property (retain, nonatomic) AXAuditElementAttribute *elementAttribute; // ivar: _elementAttribute
@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) id *value; // ivar: _value
@property (retain, nonatomic) id *valueForDisplayOverride; // ivar: _valueForDisplayOverride
@property (nonatomic) BOOL valueKnown; // ivar: _valueKnown


+(void)_continueFetchingProperties:(id)arg0 fetchedProperties:(id)arg1 fetchedValues:(id)arg2 completionBlock:(id)arg3 ;
+(void)fetchValuesForProperties:(id)arg0 completionBlock:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showElementClassName;
-(BOOL)showIgnoredElements;
-(id)_OSXConstantsToSelectorsDict;
-(id)_OSXSelectorForAction:(id)arg0 ;
-(id)_OSXSelectorForAttribute:(id)arg0 ;
-(id)_spacedStringFromCamelCase:(id)arg0 ;
-(id)description;
-(void)fetchValueWithCompletionBlock:(id)arg0 ;
-(void)focusOnElement:(id)arg0 ;
-(void)performAction;
-(void)previewElement:(id)arg0 ;
-(void)setNewValue:(id)arg0 ;


@end


#endif