// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKABSTRACTWALLPAPER_H
#define WKABSTRACTWALLPAPER_H

@class NSString, NADescriptionBuilder;
@protocol WKDescribable, NAIdentifiable, WKWallpaper;

#import <Foundation/Foundation.h>


@interface WKAbstractWallpaper : NSObject <WKDescribable, NAIdentifiable, WKWallpaper>



@property (nonatomic) NSUInteger backingType; // ivar: _backingType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, nonatomic) id *descriptionBuilderBlock;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NADescriptionBuilder *wk_descriptionBuilder;


+(id)na_identity;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 ;


@end


#endif