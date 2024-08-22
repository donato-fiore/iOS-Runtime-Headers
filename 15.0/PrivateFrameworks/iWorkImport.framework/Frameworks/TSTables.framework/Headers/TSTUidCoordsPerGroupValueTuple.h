// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTUIDCOORDSPERGROUPVALUETUPLE_H
#define TSTUIDCOORDSPERGROUPVALUETUPLE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSTUidCoordsPerGroupValueTuple : NSObject {
    NSMutableDictionary *_uidCoordsPerTuple;
}




-(id)init;
-(struct TSKUIDStructCoord )uuidCoordForGroupTuple:(id)arg0 runningLevel:(unsigned char)arg1 ;
-(void)addUidCoord:(struct TSKUIDStructCoord *)arg0 tupleForCoord:(id)arg1 atRunningLevel:(unsigned char)arg2 ;


@end


#endif