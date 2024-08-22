// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBUFRECORD_H
#define MBUFRECORD_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface mbufRecord : NSObject

@property (readonly, nonatomic) NSUInteger mbuf16KBTotal; // ivar: _mbuf16KBTotal
@property (readonly, nonatomic) NSUInteger mbuf256BTotal; // ivar: _mbuf256BTotal
@property (readonly, nonatomic) NSUInteger mbuf2KBTotal; // ivar: _mbuf2KBTotal
@property (readonly, nonatomic) NSUInteger mbuf4KBTotal; // ivar: _mbuf4KBTotal
@property (readonly, nonatomic) NSUInteger mbufDrainCount; // ivar: _mbufDrainCount
@property (readonly, nonatomic) NSUInteger mbufMemReleased; // ivar: _mbufMemReleased
@property (readonly, nonatomic) NSDate *reportTime; // ivar: _reportTime
@property (readonly, nonatomic) NSUInteger sockAtMBLimit; // ivar: _sockAtMBLimit
@property (readonly, nonatomic) NSUInteger sockMBcnt; // ivar: _sockMBcnt
@property (readonly, nonatomic) NSUInteger sockSbMBFloor; // ivar: _sockSbMBFloor


-(BOOL)isHighWaterMarkGiven:(id)arg0 ;
-(id)description;
-(id)initWithReport:(id)arg0 ;


@end


#endif