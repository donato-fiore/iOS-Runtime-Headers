// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENSESSIONMETADATA_H
#define ATXHOMESCREENSESSIONMETADATA_H

@class NSString;
@protocol ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isWidgetInTodayView; // ivar: _isWidgetInTodayView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *widgetBundleId; // ivar: _widgetBundleId
@property (retain, nonatomic) NSString *widgetUniqueId; // ivar: _widgetUniqueId


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXHomeScreenSessionMetadata:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidgetUniqueId:(id)arg0 widgetBundleId:(id)arg1 isWidgetInTodayView:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif