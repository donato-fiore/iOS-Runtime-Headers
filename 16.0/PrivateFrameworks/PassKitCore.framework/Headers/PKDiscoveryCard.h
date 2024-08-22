// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYCARD_H
#define PKDISCOVERYCARD_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKColor.h"
#import "PKDiscoveryMedia.h"
#import "PKDiscoveryCallToAction.h"
#import "PKDiscoveryItem.h"

@interface PKDiscoveryCard : NSObject <NSSecureCoding>

 {
    NSString *_itemIdentifier;
}


@property (readonly, nonatomic) PKColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) PKDiscoveryMedia *backgroundMedia; // ivar: _backgroundMedia
@property (readonly, nonatomic) PKDiscoveryCallToAction *callToAction; // ivar: _callToAction
@property (readonly, nonatomic) NSInteger foregroundContentMode; // ivar: _foregroundContentMode
@property (retain, nonatomic) NSString *heading; // ivar: _heading
@property (readonly, nonatomic) NSString *headingKey; // ivar: _headingKey
@property (readonly, nonatomic) NSString *inlineDescription; // ivar: _inlineDescription
@property (readonly, nonatomic) NSString *inlineDescriptionKey; // ivar: _inlineDescriptionKey
@property (weak, nonatomic) PKDiscoveryItem *item; // ivar: _item
@property (readonly, nonatomic) NSInteger largeCardTemplateType; // ivar: _largeCardTemplateType
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *titleKey; // ivar: _titleKey


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 table:(id)arg1 ;


@end


#endif