// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSMUTABLESESSIONPLATTERDESCRIPTOR_H
#define CHSMUTABLESESSIONPLATTERDESCRIPTOR_H

@class NSData, NSString;


#import "CHSSessionPlatterDescriptor.h"

@interface CHSMutableSessionPlatterDescriptor : CHSSessionPlatterDescriptor

@property (copy, nonatomic) NSData *activityAttributesType;
@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSData *localeToken;
@property (nonatomic) NSUInteger supportedFamilies;
@property (copy, nonatomic) NSString *widgetDescription;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setBackgroundStyle:(NSInteger)arg0 ;
-(void)setSupportsVibrantContent:(BOOL)arg0 ;


@end


#endif