// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCHARTLOOKUPSERVICE_H
#define IMCHARTLOOKUPSERVICE_H

@class NSString;


#import "IMBasePlatformLookupService.h"

@interface IMChartLookupService : IMBasePlatformLookupService

@property (retain, nonatomic) NSString *chartNumber; // ivar: _chartNumber
@property (retain, nonatomic) NSString *contentArtworkType; // ivar: _contentArtworkType
@property (retain, nonatomic) NSString *contentProfile; // ivar: _contentProfile
@property BOOL filterExplicit; // ivar: _filterExplicit
@property (retain, nonatomic) NSString *genreId; // ivar: _genreId
@property NSUInteger limit; // ivar: _limit


-(id)initWithGenreId:(id)arg0 andChartNumber:(id)arg1 ;
-(id)platformAction;
-(id)urlRequest;
-(void)performRequest:(id)arg0 ;
-(void)request:(id)arg0 ;


@end


#endif