// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDOCUMENTBROWSERACTION_H
#define UIDOCUMENTBROWSERACTION_H

@class NSPredicate, NSString, UIImage, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIDocumentBrowserActionDescriptor.h"

@interface UIDocumentBrowserAction : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger actionStyle; // ivar: _actionStyle
@property (nonatomic) NSInteger availability; // ivar: _availability
@property (retain, nonatomic) NSPredicate *filteringPredicate; // ivar: _filteringPredicate
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) NSUInteger menuSortOrder; // ivar: _menuSortOrder
@property (nonatomic) NSInteger navigationSide; // ivar: _navigationSide
@property (nonatomic) BOOL performActionExitsEditMode; // ivar: _performActionExitsEditMode
@property (nonatomic) BOOL requiresResolvedItems; // ivar: _requiresResolvedItems
@property (nonatomic) BOOL requiresVersioning; // ivar: _requiresVersioning
@property (copy, nonatomic) id *resolvedHandler; // ivar: _resolvedHandler
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSArray *supportedContentTypes; // ivar: _supportedContentTypes
@property (nonatomic) BOOL supportsMultipleItems; // ivar: _supportsMultipleItems
@property (retain, nonatomic) UIDocumentBrowserActionDescriptor *uiActionDescriptor; // ivar: _uiActionDescriptor
@property (copy, nonatomic) NSString *uiActionProviderIdentifier; // ivar: _uiActionProviderIdentifier
@property (copy, nonatomic) id *unresolvedHandler; // ivar: _unresolvedHandler


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 localizedTitle:(id)arg1 availability:(NSInteger)arg2 handler:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 localizedTitle:(id)arg1 resolvedHandler:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 localizedTitle:(id)arg1 unresolvedHandler:(id)arg2 ;
-(id)initWithUIActionDescriptor:(id)arg0 ;
-(void)commonInit;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif