// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMENUDATASOURCE_H
#define VUIMENUDATASOURCE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VUIMenuDataSource : NSObject

@property (retain, nonatomic) NSArray *genreMenuItems; // ivar: _genreMenuItems
@property (nonatomic) BOOL hasGenresDataForCheckHasItemsOption; // ivar: _hasGenresDataForCheckHasItemsOption
@property (retain, nonatomic) NSArray *mainMenuItems; // ivar: _mainMenuItems


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMainMenuItems:(id)arg0 genreMenuItems:(id)arg1 ;


@end


#endif