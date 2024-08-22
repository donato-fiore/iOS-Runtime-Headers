// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICFOLDERCUSTOMNOTESORTTYPE_H
#define ICFOLDERCUSTOMNOTESORTTYPE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface ICFolderCustomNoteSortType : NSObject

@property (nonatomic) NSInteger direction; // ivar: _direction
@property (readonly, nonatomic) BOOL isDefault;
@property (nonatomic) NSInteger order; // ivar: _order
@property (readonly, nonatomic) NSString *summaryViewTitleDescription;
@property (readonly, nonatomic) NSNumber *valueRepresentation;


+(BOOL)isTagADirection:(NSInteger)arg0 ;
+(BOOL)isTagAnOrder:(NSInteger)arg0 ;
+(NSInteger)customOrderForGlobalSortType:(NSInteger)arg0 ;
+(NSInteger)sortTypeDirectionForTag:(NSUInteger)arg0 ;
+(NSInteger)sortTypeOrderForTag:(NSUInteger)arg0 ;
+(NSUInteger)tagForSortTypeDirection:(NSInteger)arg0 ;
+(NSUInteger)tagForSortTypeOrder:(NSInteger)arg0 ;
+(id)actionItemTitleForOrder:(NSInteger)arg0 ;
+(id)currentDefaultMenuItemString;
+(id)folderNoteSortTypeFromValue:(id)arg0 ;
+(id)folderNoteSortTypeWithOrder:(NSInteger)arg0 direction:(NSInteger)arg1 ;
+(id)noteSortTypeDefaultAscending;
+(id)querySortType;
+(id)rd_actionItemTitleForOrder:(NSInteger)arg0 ;
+(id)segmentItemTitleForOrder:(NSInteger)arg0 ;
+(id)sortTypeOrderValues;
+(id)stringNameForDirection:(NSInteger)arg0 order:(NSInteger)arg1 ;
+(void)setQuerySortType:(id)arg0 ;
-(BOOL)isAscending;
-(BOOL)isEqual:(id)arg0 ;
-(id)currentActionItemTitle;
-(id)debugStringNameForOrder:(NSInteger)arg0 ;
-(id)description;
-(id)folderNoteSortTypeByChangingDirection;
-(id)folderNoteSortTypeByChangingOrder:(NSInteger)arg0 ;


@end


#endif