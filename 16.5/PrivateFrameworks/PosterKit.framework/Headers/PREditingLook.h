// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITINGLOOK_H
#define PREDITINGLOOK_H

@class NSString;
@protocol BSDescriptionStreamable, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "PREditingLookProperties.h"
#import "PRTimeFontConfiguration.h"
#import "PRPosterColor.h"

@interface PREditingLook : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) PREditingLookProperties *initialProperties;
@property (readonly, copy, nonatomic) PRTimeFontConfiguration *initialTimeFontConfiguration;
@property (readonly, copy, nonatomic) PRPosterColor *initialTitleColor;
@property (readonly) Class superclass;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDisplayName:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 initialTimeFont:(id)arg1 initialTitleColor:(id)arg2 ;
-(id)initWithDisplayName:(id)arg0 initialTimeFontConfiguration:(id)arg1 initialTitleColor:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 initialTimeFont:(id)arg2 initialTitleColor:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 initialTimeFontConfiguration:(id)arg2 initialTitleColor:(id)arg3 ;
-(id)initWithLook:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)titleStyleConfigurationWithExtensionBundle:(id)arg0 luminance:(CGFloat)arg1 timeNumberingSystem:(id)arg2 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif