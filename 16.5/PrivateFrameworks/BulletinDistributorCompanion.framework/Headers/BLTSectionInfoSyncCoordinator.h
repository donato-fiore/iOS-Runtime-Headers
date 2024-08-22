// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTSECTIONINFOSYNCCOORDINATOR_H
#define BLTSECTIONINFOSYNCCOORDINATOR_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BLTSectionInfoSyncCoordinator : NSObject {
    NSUInteger _stateHandler;
}


@property (retain, nonatomic) NSMutableArray *alertingSectionIDs; // ivar: _alertingSectionIDs
@property (retain, nonatomic) NSMutableDictionary *alertingSectionState; // ivar: _alertingSectionState
@property (copy, nonatomic) id *infoProvider; // ivar: _infoProvider
@property (nonatomic) NSUInteger mostRecentIndex; // ivar: _mostRecentIndex
@property (nonatomic) NSUInteger mostRecentIndexSinceSync; // ivar: _mostRecentIndexSinceSync


-(NSUInteger)performSyncForSectionID:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(id)description;
-(id)effectiveSectionInfoForSectionIDIndex:(NSUInteger)arg0 ;
-(id)initWithAlertingSectionIDs:(id)arg0 infoProvider:(id)arg1 ;
-(void)dealloc;
-(void)sectionInfoSendCompleted:(NSUInteger)arg0 ;


@end


#endif