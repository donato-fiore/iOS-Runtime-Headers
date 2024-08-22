// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFOPPORTUNESPEAKINGMODULEDATACOLLECTIONSANITIZEDSPEAKABLE_H
#define AFOPPORTUNESPEAKINGMODULEDATACOLLECTIONSANITIZEDSPEAKABLE_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface AFOpportuneSpeakingModuleDataCollectionSanitizedSpeakable : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isOlderThan:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;


@end


#endif