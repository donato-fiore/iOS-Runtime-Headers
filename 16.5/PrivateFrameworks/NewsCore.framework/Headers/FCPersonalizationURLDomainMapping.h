// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPERSONALIZATIONURLDOMAINMAPPING_H
#define FCPERSONALIZATIONURLDOMAINMAPPING_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FCPersonalizationURLDomainMapping : NSObject

@property (nonatomic) CGFloat averageSafariVisitsPerDay; // ivar: _averageSafariVisitsPerDay
@property (retain, nonatomic) NSDictionary *paths; // ivar: _paths


-(id)initWithPBURLMappingDomain:(id)arg0 ;
-(id)tagsForPath:(id)arg0 ;


@end


#endif