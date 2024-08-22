// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CONTENTSEARCH_H
#define CONTENTSEARCH_H

@class INObject, NSString, NSNumber, INDateComponentsRange, NSArray;


#import "SearchAttributes.h"

@interface ContentSearch : INObject

@property (nonatomic, retain) SearchAttributes *attributes;
@property (nonatomic, copy) NSString *episodeNumber;
@property (nonatomic) NSInteger episodeReference;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, retain) NSNumber *itemLimit;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSNumber *recommendedAge;
@property (nonatomic, retain) INDateComponentsRange *releaseDateRange;
@property (nonatomic, copy) NSArray *roles;
@property (nonatomic, copy) NSString *seasonNumber;
@property (nonatomic) NSInteger seasonReference;
@property (nonatomic) NSInteger sort;
@property (nonatomic, copy) NSString *studio;
@property (nonatomic) NSInteger type;
@property (nonatomic, copy) NSString *umcId;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif