// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEDETAILSETTINGSPERSONSUGGESTIONDATASOURCE_H
#define PXPEOPLEDETAILSETTINGSPERSONSUGGESTIONDATASOURCE_H

@class NSString, NSArray;
@protocol PXPeopleDetailSettingsDataSource;

#import <Foundation/Foundation.h>


@interface PXPeopleDetailSettingsPersonSuggestionDataSource : NSObject <PXPeopleDetailSettingsDataSource>



@property (readonly, nonatomic) NSInteger action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMoreDetails;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numberOfItems;
@property (retain, nonatomic) NSArray *personSuggestions; // ivar: _personSuggestions
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(NSInteger)verifyTypeAtIndex:(NSInteger)arg0 ;
-(NSUInteger)faceCount:(NSInteger)arg0 ;
-(id)initWithTitle:(id)arg0 personSuggestions:(id)arg1 ;
-(id)modelObjectForIndex:(NSInteger)arg0 ;
-(id)personNameAtIndex:(NSInteger)arg0 ;
-(void)imageAtIndex:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 resultHandler:(id)arg3 ;
-(void)imageAtIndex:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 withCompletionBlock:(id)arg2 ;


@end


#endif