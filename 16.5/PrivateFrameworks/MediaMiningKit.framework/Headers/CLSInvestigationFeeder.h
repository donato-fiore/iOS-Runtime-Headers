// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSINVESTIGATIONFEEDER_H
#define CLSINVESTIGATIONFEEDER_H

@class NSString, NSMutableSet, NSSet, NSDate;
@protocol CLSInvestigationInterviewDelegate;

#import <Foundation/Foundation.h>


@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate>



@property (nonatomic) BOOL allowsInterview; // ivar: _allowsInterview
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableSet *focusItems; // ivar: _focusItems
@property (retain, nonatomic) NSSet *focusPersonLocalIdentifiers; // ivar: _focusPersonLocalIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (nonatomic) NSUInteger locationClusteringAlgorithm; // ivar: _locationClusteringAlgorithm
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSDate *universalStartDate;


-(CGFloat)behavioralScore;
-(NSUInteger)numberOfItems;
-(NSUInteger)numberOfItemsInInvestigation:(id)arg0 ;
-(NSUInteger)numberOfRegularGemItems;
-(NSUInteger)numberOfShinyGemItems;
-(id)_prepareFeederWithProgressBlock:(id)arg0 ;
-(id)allItems;
-(id)approximateLocation;
-(id)init;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(id)prepareWithProgressBlock:(id)arg0 ;
-(id)privateItems;
-(id)sharedItems;
-(void)_enumerateLocationClustersWithGaussians:(id)arg0 enumerationBlock:(id)arg1 ;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)enumerateItemsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersonNames:(id)arg0 withGaussiansUsingBlock:(id)arg1 ;


@end


#endif