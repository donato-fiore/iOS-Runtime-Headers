// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITLEDATASOURCE_H
#define TITLEDATASOURCE_H

@class NSArray, NSString, NSMutableArray;
@protocol ItemStylePickerDataSource;

#import <Foundation/Foundation.h>


@interface TitleDataSource : NSObject <ItemStylePickerDataSource>



@property (retain, nonatomic) NSArray *allTitleNames; // ivar: _allTitleNames
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *genericTitleInfoItems; // ivar: _genericTitleInfoItems
@property (retain, nonatomic) NSMutableArray *genericTitleNames; // ivar: _genericTitleNames
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeMotionTitles; // ivar: _includeMotionTitles
@property (nonatomic) BOOL includeNone; // ivar: _includeNone
@property (nonatomic) BOOL includeThemeTitles; // ivar: _includeThemeTitles
@property (retain, nonatomic) NSMutableArray *motionTitleNames; // ivar: _motionTitleNames
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *themeTitleNames; // ivar: _themeTitleNames


+(id)sharedDataSource;
-(NSInteger)numberOfItems;
-(NSUInteger)numberOfTitles;
-(id)indexPathOfItemName:(id)arg0 ;
-(id)indexPathOfTitleName:(id)arg0 ;
-(id)init;
-(id)itemNameAtIndexPath:(id)arg0 ;
-(id)itemNames;
-(id)micaFileNameForTitleIdentifier:(id)arg0 micaFileBaseName:(id)arg1 ;
-(id)representativeTitleNameForTitleDefinition:(id)arg0 ;
-(id)titleNameAtIndex:(NSUInteger)arg0 ;
-(id)titleStylesIncludingTheme:(BOOL)arg0 includingMotion:(BOOL)arg1 ;
-(id)titleTypesForTitleDefinition:(id)arg0 ;
-(void)dealloc;


@end


#endif