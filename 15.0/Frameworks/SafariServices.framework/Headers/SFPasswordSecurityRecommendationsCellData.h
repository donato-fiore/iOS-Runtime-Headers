// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPASSWORDSECURITYRECOMMENDATIONSCELLDATA_H
#define SFPASSWORDSECURITYRECOMMENDATIONSCELLDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFPasswordSecurityRecommendationsCellData : NSObject

@property (nonatomic) NSUInteger numberOfWarnings; // ivar: _numberOfWarnings
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (nonatomic) NSInteger warningStyle; // ivar: _warningStyle


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithLoadingSubtitle;
-(id)initWithSubtitleText:(id)arg0 numberOfWarnings:(NSUInteger)arg1 warningStyle:(NSInteger)arg2 ;


@end


#endif