// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHOMESCREENWIDGETPERSONALITY_H
#define ATXHOMESCREENWIDGETPERSONALITY_H

@class NSString;
@protocol NSSecureCoding, NSCopying, ATXHomeScreenWidgetPersonalityProviding;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenWidgetPersonality.h"

@interface ATXHomeScreenWidgetPersonality : NSObject <NSSecureCoding, NSCopying, ATXHomeScreenWidgetPersonalityProviding>



@property (readonly, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (readonly, nonatomic) NSString *kind; // ivar: _kind
@property (readonly) ATXHomeScreenWidgetPersonality *personality;


+(BOOL)supportsSecureCoding;
+(id)stringRepresentationForATXHomeScreenWidgetDescriptor:(id)arg0 ;
+(id)stringRepresentationForExtensionBundleId:(id)arg0 kind:(id)arg1 ;
+(id)widgetBundleIdForWidgetPersonalityStringRepresentation:(id)arg0 ;
+(id)widgetKindForWidgetPersonalityStringRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionBundleId:(id)arg0 kind:(id)arg1 ;
-(id)initWithStringRepresentation:(id)arg0 ;
-(id)stringRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif