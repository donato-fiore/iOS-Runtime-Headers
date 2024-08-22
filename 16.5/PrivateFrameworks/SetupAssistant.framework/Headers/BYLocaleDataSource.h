// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYLOCALEDATASOURCE_H
#define BYLOCALEDATASOURCE_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface BYLocaleDataSource : NSObject

@property (nonatomic) BOOL hasRecommendedLocaleFromLanguage; // ivar: _hasRecommendedLocaleFromLanguage
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSMutableArray *moreCountries; // ivar: _moreCountries
@property (retain, nonatomic) NSMutableArray *suggestedCountries; // ivar: _suggestedCountries


+(id)newWithLanguage:(id)arg0 ;
-(NSUInteger)numberOfOtherLocales;
-(NSUInteger)numberOfRecommendedLocales;
-(id)otherLocaleAtIndex:(NSUInteger)arg0 ;
-(id)recommendedLocaleAtIndex:(NSUInteger)arg0 ;
-(void)reloadData;


@end


#endif