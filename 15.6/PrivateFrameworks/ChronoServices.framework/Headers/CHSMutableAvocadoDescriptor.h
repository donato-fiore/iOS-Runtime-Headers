// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSMUTABLEAVOCADODESCRIPTOR_H
#define CHSMUTABLEAVOCADODESCRIPTOR_H

@class NSString, NSData;


#import "CHSAvocadoDescriptor.h"

@interface CHSMutableAvocadoDescriptor : CHSAvocadoDescriptor

@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSData *localeToken;
@property (nonatomic) NSUInteger supportedFamilies;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (copy, nonatomic) NSString *widgetDescription;
@property (nonatomic) NSInteger widgetVisibility;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif