// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTUIDCOORDSPERRUNNINGCELLVALUE_H
#define TSTUIDCOORDSPERRUNNINGCELLVALUE_H


#import <Foundation/Foundation.h>


@interface TSTUidCoordsPerRunningCellValue : NSObject {
    vector<TSCECellValue *, std::allocator<TSCECellValue *>> _cellValues;
    vector<TSTUidCoordsPerGroupValueTuple *, std::allocator<TSTUidCoordsPerGroupValueTuple *>> _uidCoords;
}




-(struct TSKUIDStructCoord )getUidCoordforRunningAggregate:(struct TSTRunningAggregate *)arg0 tupleForCoord:(id)arg1 newUidCoord:(struct TSKUIDStructCoord *)arg2 addNewUidCoordEvenIfNotFound:(BOOL)arg3 inContext:(id)arg4 ;
-(struct TSKUIDStructCoord )uuidCoordAtIndex:(NSUInteger)arg0 templateTuple:(id)arg1 runningLevel:(unsigned char)arg2 ;


@end


#endif