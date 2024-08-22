// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VISEARCHRESULT_H
#define VISEARCHRESULT_H

@class NSArray, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VISearchResult : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *regionOfInterestResults; // ivar: _regionOfInterestResults
@property (readonly, nonatomic) NSData *userFeedbackPayload; // ivar: _userFeedbackPayload


+(id)empty;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRegionOfInterestResults:(id)arg0 ;
-(id)initWithRegionOfInterestResults:(id)arg0 userFeedbackPayload:(id)arg1 ;


@end


#endif