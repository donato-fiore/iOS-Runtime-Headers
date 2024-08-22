// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWL2INTERFACEQUEUESTATS_H
#define NWL2INTERFACEQUEUESTATS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NWL2InterfaceQueueStats : NSObject

@property (nonatomic) NSUInteger averageQueueDelay; // ivar: _averageQueueDelay
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) int interfaceType; // ivar: _interfaceType
@property (nonatomic) NSUInteger maximumQueueDelay; // ivar: _maximumQueueDelay
@property (nonatomic) NSUInteger minimumQueueDelay; // ivar: _minimumQueueDelay
@property (nonatomic) unsigned char slot; // ivar: _slot


+(id)interfaceQueueStatsSlotToString:(unsigned char)arg0 ;
-(id)description;


@end


#endif