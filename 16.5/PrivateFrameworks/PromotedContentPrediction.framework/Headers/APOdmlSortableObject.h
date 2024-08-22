// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLSORTABLEOBJECT_H
#define APODMLSORTABLEOBJECT_H

@class NSNumber;
@protocol APOdmlRankable;

#import <Foundation/Foundation.h>


@interface APOdmlSortableObject : NSObject

@property (readonly, nonatomic) NSNumber *pTTR; // ivar: _pTTR
@property (readonly, nonatomic) NSObject<APOdmlRankable> *rankable; // ivar: _rankable


-(id)initWithRankable:(id)arg0 andPTTR:(id)arg1 ;


@end


#endif