// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMINIMALSLOTRESOLUTIONPARAMETERS_H
#define ATXMINIMALSLOTRESOLUTIONPARAMETERS_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ATXMinimalSlotResolutionParameters : NSObject <NSCopying>

 {
    NSUInteger _paramHash;
    NSUUID *_slotSetUuid;
}


@property (readonly, nonatomic) NSUInteger paramCount; // ivar: _paramCount
@property (readonly, nonatomic) NSUInteger slotHash; // ivar: _slotHash


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionAndSlotSet;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAction:(id)arg0 slots:(id)arg1 ;
-(id)initWithParameterHash:(NSUInteger)arg0 slotHash:(NSUInteger)arg1 uuid:(id)arg2 paramCount:(NSUInteger)arg3 ;


@end


#endif