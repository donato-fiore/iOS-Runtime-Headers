// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXWIDGETPERSONALITY_H
#define ATXWIDGETPERSONALITY_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXWidgetPersonality : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (readonly, nonatomic) NSString *kind; // ivar: _kind


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
-(id)personality;
-(id)stringRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif