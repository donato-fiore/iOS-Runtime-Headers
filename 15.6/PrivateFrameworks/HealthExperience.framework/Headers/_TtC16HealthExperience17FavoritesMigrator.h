// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16HEALTHEXPERIENCE17FAVORITESMIGRATOR_H
#define _TTC16HEALTHEXPERIENCE17FAVORITESMIGRATOR_H

@protocol WDFavoriteDisplayTypesControllerObserver;

#import <Foundation/Foundation.h>


@interface _TtC16HealthExperience17FavoritesMigrator : NSObject <WDFavoriteDisplayTypesControllerObserver>

 {
    ? favoritesController;
    ? favoritesManager;
    ? keyValueDomain;
    ? migrationCompletion;
}




-(id)init;
-(void)favoriteDisplayTypesControllerReady:(id)arg0 ;


@end


#endif