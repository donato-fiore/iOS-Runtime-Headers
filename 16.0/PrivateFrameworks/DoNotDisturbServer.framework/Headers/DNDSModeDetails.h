// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMODEDETAILS_H
#define DNDSMODEDETAILS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DNDSModeDetails : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger interruptionSuppression; // ivar: _interruptionSuppression


+(id)detailsForInactiveDoNotDisturb;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithInterruptionSuppression:(NSUInteger)arg0 ;
-(id)restrictedDetailsWithDetails:(id)arg0 ;


@end


#endif