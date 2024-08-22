// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSMUTABLECONFIGUREDWIDGETDESCRIPTOR_H
#define CHSMUTABLECONFIGUREDWIDGETDESCRIPTOR_H



#import "CHSConfiguredWidgetDescriptor.h"

@interface CHSMutableConfiguredWidgetDescriptor : CHSConfiguredWidgetDescriptor

@property (nonatomic) BOOL showsComplicationLabel;
@property (nonatomic) BOOL showsWidgetLabel;
@property (nonatomic, getter=isSuggestion) BOOL suggestion;
@property (nonatomic) NSUInteger supportedColorSchemes;
@property (nonatomic) NSUInteger supportedRenderingModes;
@property (nonatomic) BOOL supportsLowLuminance;
@property (nonatomic) BOOL supportsTinting;
@property (nonatomic, getter=isSystemConfigured) BOOL systemConfigured;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif