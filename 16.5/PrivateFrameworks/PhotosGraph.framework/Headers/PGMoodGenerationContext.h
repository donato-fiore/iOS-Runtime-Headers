// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMOODGENERATIONCONTEXT_H
#define PGMOODGENERATIONCONTEXT_H

@class NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface PGMoodGenerationContext : NSObject {
    NSMutableDictionary *_isLongTimeNoSeeByPersonLocalIdentifier;
    NSMutableDictionary *_isLongTimeNoSeeBySocialGroupUUID;
    NSMutableDictionary *_isLongTimeNoSeeByLocationUUID;
    NSDate *_longTimeNoSeePeopleLatestDate;
    NSDate *_longTimeNoSeeLocationLatestDate;
}




-(BOOL)locationIsLongTimeNoSeeWithLocationNode:(id)arg0 ;
-(BOOL)momentIsLongTimeNoSeeForLocationWithMomentNode:(id)arg0 ;
-(BOOL)momentIsLongTimeNoSeeForPeopleWithMomentNode:(id)arg0 ;
-(BOOL)personIsLongTimeNoSeeWithPersonNode:(id)arg0 ;
-(BOOL)socialGroupIsLongTimeNoSeeWithSocialGroupNode:(id)arg0 ;
-(id)initWithReferenceDate:(id)arg0 ;


@end


#endif