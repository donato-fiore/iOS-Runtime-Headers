// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOREUICATALOGCOLORWRAPPER_H
#define _UICOREUICATALOGCOLORWRAPPER_H

@class NSString, NSMutableDictionary;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UICoreUICatalogColorWrapper : NSObject <NSCoding>

 {
    NSString *_nibLoadingBundleID;
    NSMutableDictionary *_colorCache;
    BOOL _hasLoggedFailure;
}


@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *fallbackColor; // ivar: _fallbackColor
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(BOOL)_uikit_variesByTraitCollections;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCoreUICatalogColor:(id)arg0 ;
-(NSUInteger)hash;
-(id)_uikit_valueForTraitCollection:(id)arg0 ;
-(id)bundle;
-(id)cachedColorForDisplayGamut:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 bundleID:(id)arg1 fallbackColor:(id)arg2 ;
-(id)nibLoadingBundle;
-(struct CGColor *)cgColorForTraitCollection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCachedColor:(id)arg0 forDisplayGamut:(NSInteger)arg1 ;


@end


#endif