// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHWIDGETSTACKDESCRIPTOR_H
#define SBHWIDGETSTACKDESCRIPTOR_H

@class UIColor, NSString, NSArray;
@protocol SBHAddWidgetSheetGalleryItem;

#import <Foundation/Foundation.h>


@interface SBHWidgetStackDescriptor : NSObject <SBHAddWidgetSheetGalleryItem>



@property (readonly, copy, nonatomic) UIColor *accentColor;
@property (readonly, copy, nonatomic) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *extraLargeStackDescriptors; // ivar: _extraLargeStackDescriptors
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *largeStackDescriptors; // ivar: _largeStackDescriptors
@property (retain, nonatomic) NSArray *mediumStackDescriptors; // ivar: _mediumStackDescriptors
@property (readonly, copy, nonatomic) UIColor *mostInterestingColor;
@property (readonly, copy, nonatomic) NSString *sbh_appName;
@property (readonly, nonatomic) BOOL sbh_canBeAddedToStack;
@property (readonly, copy, nonatomic) NSString *sbh_galleryItemIdentifier; // ivar: _sbh_galleryItemIdentifier
@property (readonly, nonatomic) NSUInteger sbh_supportedSizeClasses;
@property (readonly, copy, nonatomic) NSString *sbh_widgetDescription;
@property (readonly, copy, nonatomic) NSString *sbh_widgetName;
@property (retain, nonatomic) NSArray *smallStackDescriptors; // ivar: _smallStackDescriptors
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)descriptorsForSizeClass:(NSInteger)arg0 ;
-(id)initWithSmallStackDescriptors:(id)arg0 mediumStackDescriptors:(id)arg1 largeStackDescriptors:(id)arg2 extraLargeStackDescriptors:(id)arg3 ;


@end


#endif