// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCRDTPOSITIONGENERATOR_H
#define WBSCRDTPOSITIONGENERATOR_H

@class NSDictionary;
@protocol WBSCRDTPositionGeneratorDelegate;

#import <Foundation/Foundation.h>


@interface WBSCRDTPositionGenerator : NSObject {
    NSDictionary *_recordNamesToPositions;
}


@property (readonly, weak, nonatomic) NSObject<WBSCRDTPositionGeneratorDelegate> *delegate; // ivar: _delegate


-(id)_generatePositionBetweenPosition:(id)arg0 andPosition:(id)arg1 ;
-(id)_generatePositionsForStrides:(id)arg0 ;
-(id)_positionForRecordName:(id)arg0 ;
-(id)_stridesForSiblingRecords:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)positionForBookmarkWithRecordName:(id)arg0 ;
-(void)_enumerateRecordNamesAfterRecordWithName:(id)arg0 usingBlock:(id)arg1 ;
-(void)_enumerateRecordNamesBeforeRecordWithName:(id)arg0 usingBlock:(id)arg1 ;
-(void)generatePositionsForChildRecordNamesGroupedByParentFolders:(id)arg0 ;


@end


#endif