// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITPEOPLESUGGESTIONSDATASOURCESTATE_H
#define PXPHOTOKITPEOPLESUGGESTIONSDATASOURCESTATE_H

@class PHFetchResult, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXPhotoKitPeopleSuggestionsDataSourceState : NSObject <NSCopying>



@property (readonly, nonatomic) PHFetchResult *people; // ivar: _people
@property (readonly, nonatomic) NSDictionary *personSuggestionsByPerson; // ivar: _personSuggestionsByPerson


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPeople:(id)arg0 personSuggestionsByPerson:(id)arg1 ;
-(id)stateUpdatedWithChange:(id)arg0 changeDetails:(*id)arg1 ;


@end


#endif