// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUINAMEDLOOKUP_H
#define CUINAMEDLOOKUP_H

@class NSString;
@protocol NSLocking;

#import <Foundation/Foundation.h>

#import "CUIThemeRendition.h"
#import "CUIRenditionKey.h"

@interface CUINamedLookup : NSObject <NSLocking>

 {
    NSString *_signature;
    unsigned int _distilledInVersion;
    os_unfair_lock_s _lock;
    BOOL _odContent;
}


@property (readonly, nonatomic) BOOL _cacheRenditionProperties;
@property (readonly, nonatomic) unsigned int _distilledInVersion;
@property (readonly, nonatomic) CUIThemeRendition *_rendition;
@property (readonly, nonatomic) NSString *appearance;
@property (readonly, nonatomic) NSInteger appearanceIdentifier;
@property (readonly, nonatomic) NSInteger displayGamut;
@property (readonly, nonatomic) NSInteger graphicsClass;
@property (readonly, nonatomic) NSInteger idiom;
@property (copy, nonatomic) CUIRenditionKey *key; // ivar: _key
@property (readonly, nonatomic) NSString *keySignature;
@property (readonly, nonatomic) NSInteger layoutDirection;
@property (readonly, nonatomic) NSInteger memoryClass;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CUIRenditionKey *renditionKey;
@property (readonly, nonatomic) NSString *renditionName;
@property (readonly, nonatomic) BOOL representsOnDemandContent;
@property (readonly, nonatomic) NSInteger sizeClassHorizontal;
@property (readonly, nonatomic) NSInteger sizeClassVertical;
@property (nonatomic) NSUInteger storageRef; // ivar: _storageRef
@property (readonly, nonatomic) NSUInteger subtype;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTintable;
-(NSUInteger)hash;
-(id)_renditionForSpecificKey:(id)arg0 ;
-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif