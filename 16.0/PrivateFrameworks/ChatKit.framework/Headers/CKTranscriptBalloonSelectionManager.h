// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTBALLOONSELECTIONMANAGER_H
#define CKTRANSCRIPTBALLOONSELECTIONMANAGER_H

@class NSArray, NSMutableOrderedSet, NSMutableDictionary, NSString;
@protocol NSFastEnumeration, CKTranscriptBalloonSelectionManagerDataSource, CKTranscriptBalloonSelectionManagerDelegate;

#import <Foundation/Foundation.h>


@interface CKTranscriptBalloonSelectionManager : NSObject <NSFastEnumeration>



@property (readonly, nonatomic) NSArray *chatItems;
@property (weak, nonatomic) NSObject<CKTranscriptBalloonSelectionManagerDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<CKTranscriptBalloonSelectionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger selectedGuidCount;
@property (retain, nonatomic) NSMutableOrderedSet *selectedMessageGuids; // ivar: _selectedMessageGuids
@property (retain, nonatomic) NSMutableDictionary *selectedStates; // ivar: _selectedStates
@property (retain, nonatomic) NSString *trackedGuid; // ivar: _trackedGuid


-(BOOL)isMessageGuidSelected:(id)arg0 ;
-(NSInteger)indexOfGuid:(id)arg0 inChatItems:(id)arg1 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_chatItemForGUID:(id)arg0 ;
-(id)init;
-(id)selectedGuidAtIndex:(NSUInteger)arg0 ;
-(id)selectedStateForGuid:(id)arg0 ;
-(void)addSelectedMessageGuid:(id)arg0 selectionState:(id)arg1 ;
-(void)removeAllSelectedMessageGuids;
-(void)removeAllSelectedMessageGuidsExceptTrackedGuid;
-(void)removeSelectedMessageGuid:(id)arg0 ;
-(void)removeTrackedGuid;
-(void)setSelectedGuids:(id)arg0 ;
-(void)trackSelectedGuid:(id)arg0 selectionState:(id)arg1 ;


@end


#endif