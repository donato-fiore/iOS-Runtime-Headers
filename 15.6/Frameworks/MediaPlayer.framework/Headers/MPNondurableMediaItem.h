// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPNONDURABLEMEDIAITEM_H
#define MPNONDURABLEMEDIAITEM_H



#import "MPMediaItem.h"

@interface MPNondurableMediaItem : MPMediaItem {
    NSUInteger _persistentID;
}




+(BOOL)canFilterByProperty:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)defaultPropertyValues;
-(BOOL)didSkipWithPlayedToTime:(CGFloat)arg0 ;
-(BOOL)existsInLibrary;
-(BOOL)incrementPlayCountForStopTime:(CGFloat)arg0 ;
-(BOOL)isUsableAsRepresentativeItem;
-(CGFloat)nominalHasBeenPlayedThreshold;
-(NSUInteger)persistentID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentID:(NSUInteger)arg0 ;
-(id)mediaLibrary;
-(id)valueForProperty:(id)arg0 ;
-(id)valuesForProperties:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateValuesForProperties:(id)arg0 usingBlock:(id)arg1 ;
-(void)incrementPlayCount;
-(void)incrementPlayCountForPlayingToEnd;
-(void)incrementSkipCount;
-(void)markNominalAmountHasBeenPlayed;
-(void)noteWasPlayedToTime:(CGFloat)arg0 skipped:(BOOL)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id)arg0 ;


@end


#endif