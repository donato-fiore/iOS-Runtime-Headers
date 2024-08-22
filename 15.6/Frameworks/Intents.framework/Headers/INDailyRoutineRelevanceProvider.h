// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INDAILYROUTINERELEVANCEPROVIDER_H
#define INDAILYROUTINERELEVANCEPROVIDER_H



#import "INRelevanceProvider.h"

@interface INDailyRoutineRelevanceProvider : INRelevanceProvider

@property (readonly, nonatomic) NSInteger situation; // ivar: _situation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSituation:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif