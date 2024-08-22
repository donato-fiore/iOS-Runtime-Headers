// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPAGECOMPONENTCONTEXT_H
#define SKUIPAGECOMPONENTCONTEXT_H

@class NSSet, NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIPageComponentContext : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSSet *allUnavailableItemIdentifiers; // ivar: _unavailableItems
@property (copy, nonatomic) NSDictionary *componentDictionary; // ivar: _componentDictionary
@property (copy, nonatomic) NSArray *ineligibleGratisIdentifiers; // ivar: _ineligibleGratisIdentifiers
@property (copy, nonatomic) NSDictionary *items; // ivar: _items
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (readonly, nonatomic) CGFloat pageGenerationTime; // ivar: _pageGenerationTime
@property (copy, nonatomic) NSDictionary *platformKeyProfileOverrides; // ivar: _platformKeyProfileOverrides


-(BOOL)isUnavailableItemIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)itemForItemIdentifier:(id)arg0 ;
-(void)addUnavailableItemIdentifiers:(id)arg0 ;
-(void)setUnavailableItemIdentifiers:(id)arg0 ;


@end


#endif