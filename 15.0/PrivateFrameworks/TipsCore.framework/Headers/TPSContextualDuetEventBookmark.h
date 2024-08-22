// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCONTEXTUALDUETEVENTBOOKMARK_H
#define TPSCONTEXTUALDUETEVENTBOOKMARK_H

@class NSDictionary;


#import "TPSContextualEventBookmark.h"

@interface TPSContextualDuetEventBookmark : TPSContextualEventBookmark

@property (copy, nonatomic) NSDictionary *observationMap; // ivar: _observationMap


+(BOOL)supportsSecureCoding;
+(id)bookmarkWithObservationMap:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif