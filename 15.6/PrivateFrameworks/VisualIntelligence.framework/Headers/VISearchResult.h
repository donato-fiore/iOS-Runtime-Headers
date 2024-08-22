// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VISEARCHRESULT_H
#define VISEARCHRESULT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VISearchResult : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *regionOfInterestResults; // ivar: _regionOfInterestResults


+(id)empty;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRegionOfInterestResults:(id)arg0 ;


@end


#endif