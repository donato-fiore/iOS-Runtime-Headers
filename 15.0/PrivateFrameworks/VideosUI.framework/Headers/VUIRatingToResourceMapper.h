// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIRATINGTORESOURCEMAPPER_H
#define VUIRATINGTORESOURCEMAPPER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VUIRatingToResourceMapper : NSObject

@property (retain, nonatomic) NSDictionary *mappingDictionary; // ivar: _mappingDictionary


-(id)_cleanRatingName:(id)arg0 ;
-(id)init;
-(id)resourceForRating:(id)arg0 ratingSystem:(id)arg1 ;


@end


#endif