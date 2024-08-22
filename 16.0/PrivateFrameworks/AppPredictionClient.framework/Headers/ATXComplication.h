// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCOMPLICATION_H
#define ATXCOMPLICATION_H

@class NSString, INIntent, CHSWidgetDescriptor;
@protocol NSSecureCoding, NSCopying, CHSWidgetPersonality;

#import <Foundation/Foundation.h>


@interface ATXComplication : NSObject <NSSecureCoding, NSCopying, CHSWidgetPersonality>



@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (copy, nonatomic) NSString *predictionSource; // ivar: _predictionSource
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) int source; // ivar: _source
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CHSWidgetDescriptor *widgetDescriptor;
@property (readonly, nonatomic) NSInteger widgetFamily; // ivar: _widgetFamily


+(BOOL)supportsSecureCoding;
+(id)complicationFromDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)stringForComplicationSource:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXComplication:(id)arg0 ;
-(BOOL)matchesPersonality:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 kind:(id)arg1 containerBundleIdentifier:(id)arg2 widgetFamily:(NSInteger)arg3 intent:(id)arg4 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 kind:(id)arg1 containerBundleIdentifier:(id)arg2 widgetFamily:(NSInteger)arg3 intent:(id)arg4 source:(int)arg5 ;
-(id)initWithWidgetDescriptor:(id)arg0 widgetFamily:(NSInteger)arg1 intent:(id)arg2 ;
-(id)initWithWidgetDescriptor:(id)arg0 widgetFamily:(NSInteger)arg1 intent:(id)arg2 source:(int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif