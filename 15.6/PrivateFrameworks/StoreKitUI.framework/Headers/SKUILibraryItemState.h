// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUILIBRARYITEMSTATE_H
#define SKUILIBRARYITEMSTATE_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUILibraryItemState : NSObject <NSCopying>



@property (nonatomic) NSUInteger AVTypes; // ivar: _avTypes
@property (nonatomic) NSInteger availability; // ivar: _availability
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (nonatomic, getter=isHighDefinition) BOOL highDefinition; // ivar: _highDefinition
@property (readonly, nonatomic) NSString *itemStateVariantIdentifier;
@property (nonatomic, getter=isPreview) BOOL preview; // ivar: _preview
@property (nonatomic, getter=isRental) BOOL rental; // ivar: _rental
@property (copy, nonatomic) NSNumber *storeAccountIdentifier; // ivar: _storeAccountIdentifier
@property (copy, nonatomic) NSString *storeFlavorIdentifier; // ivar: _storeFlavorIdentifier
@property (copy, nonatomic) NSString *storePlatformKind; // ivar: _storePlatformKind
@property (copy, nonatomic) NSNumber *storeVersionIdentifier; // ivar: _storeVersionIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithApplication:(id)arg0 ;
-(id)newJavaScriptRepresentation;


@end


#endif