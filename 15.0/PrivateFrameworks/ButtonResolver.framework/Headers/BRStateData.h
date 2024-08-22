// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRSTATEDATA_H
#define BRSTATEDATA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BRStateData : NSObject

@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) id *propertyList;
@property (readonly, nonatomic) NSMutableDictionary *speedConfigs; // ivar: _speedConfigs
@property (readonly, nonatomic) NSMutableDictionary *speedSlots; // ivar: _speedSlots
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithState:(NSUInteger)arg0 enabled:(BOOL)arg1 ;
-(id)initWithStateData:(id)arg0 ;
-(void)dealloc;


@end


#endif