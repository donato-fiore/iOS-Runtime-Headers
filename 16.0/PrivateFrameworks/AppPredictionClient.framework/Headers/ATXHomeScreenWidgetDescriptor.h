// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENWIDGETDESCRIPTOR_H
#define ATXHOMESCREENWIDGETDESCRIPTOR_H

@class NSString, CHSWidgetDescriptor;
@protocol NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenWidgetDescriptor : NSObject <NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem>



@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (copy, nonatomic) CHSWidgetDescriptor *avocadoDescriptor; // ivar: _avocadoDescriptor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger rankType; // ivar: _rankType
@property (nonatomic) NSUInteger suggestedSize; // ivar: _suggestedSize
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)compactDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)extensionBundleIdForMetrics;
-(id)initWithCoder:(id)arg0 ;
-(id)widgetKind;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif