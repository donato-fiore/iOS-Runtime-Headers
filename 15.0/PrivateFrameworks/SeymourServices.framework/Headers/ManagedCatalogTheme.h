// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDCATALOGTHEME_H
#define MANAGEDCATALOGTHEME_H

@class NSManagedObject, NSString;


#import "ManagedCatalogThemeCategory.h"

@interface ManagedCatalogTheme : NSManagedObject

@property (nonatomic, retain) ManagedCatalogThemeCategory *category;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif