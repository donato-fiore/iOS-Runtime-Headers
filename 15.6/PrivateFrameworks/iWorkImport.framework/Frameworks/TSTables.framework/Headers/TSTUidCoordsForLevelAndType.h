// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTUIDCOORDSFORLEVELANDTYPE_H
#define TSTUIDCOORDSFORLEVELANDTYPE_H


#import <Foundation/Foundation.h>


@interface TSTUidCoordsForLevelAndType : NSObject {
    unordered_map<TSCECategoryLevel, TSKUIDStructCoord, std::hash<TSCECategoryLevel>, std::equal_to<TSCECategoryLevel>, std::allocator<std::pair<const TSCECategoryLevel, TSKUIDStructCoord>>> _uidCoordsPerRunLevel;
}




-(struct TSKUIDStructCoord )uuidCoordAtRunningLevel:(unsigned char)arg0 ;
-(void)addUidCoord:(struct TSKUIDStructCoord *)arg0 atRunningLevel:(unsigned char)arg1 ;


@end


#endif