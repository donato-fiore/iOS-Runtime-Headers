// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSMUTABLEWIDGETDESCRIPTOR_H
#define CHSMUTABLEWIDGETDESCRIPTOR_H

@class NSString, NSArray, NSData;


#import "CHSWidgetDescriptor.h"

@interface CHSMutableWidgetDescriptor : CHSWidgetDescriptor

@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (retain, nonatomic) NSArray *intentRecommendations;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSData *localeToken;
@property (copy, nonatomic) NSString *nativeContainerBundleIdentifier;
@property (nonatomic) NSUInteger supportedFamilies;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (copy, nonatomic) NSString *widgetDescription;
@property (nonatomic) NSInteger widgetVisibility;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setBackgroundStyle:(NSInteger)arg0 ;
-(void)setSupportsVibrantContent:(BOOL)arg0 ;


@end


#endif