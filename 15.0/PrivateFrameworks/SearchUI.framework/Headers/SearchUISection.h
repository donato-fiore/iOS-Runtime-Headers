// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUISECTION_H
#define SEARCHUISECTION_H

@class SFCollectionCardSection, SFResultSection, NSString;

#import <Foundation/Foundation.h>


@interface SearchUISection : NSObject

@property (readonly) SFCollectionCardSection *collectionSection; // ivar: _collectionSection
@property (readonly) SFResultSection *resultSection; // ivar: _resultSection
@property (readonly) NSString *reuseIdentifier; // ivar: _reuseIdentifier


+(id)sectionWithResultSection:(id)arg0 ;
+(id)sectionWithResultSection:(id)arg0 collectionCardSection:(id)arg1 ;
-(id)initWithResultSection:(id)arg0 collectionSection:(id)arg1 ;


@end


#endif