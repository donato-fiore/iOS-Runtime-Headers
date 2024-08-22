// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APRKPLAYERITEM_H
#define APRKPLAYERITEM_H

@class AVPlayerItem, NSURL, NSArray, NSString, NSDate;



@interface APRKPlayerItem : AVPlayerItem {
    NSURL *_contentLocation;
    NSArray *_outOfBandAlternateTracks;
}


@property (copy, nonatomic) NSString *UUIDString; // ivar: _UUIDString
@property (nonatomic) NSInteger actionAtItemEnd; // ivar: _actionAtItemEnd
@property (readonly, nonatomic) BOOL expectsSecureStop; // ivar: _expectsSecureStop
@property (nonatomic) BOOL isAudioOnly; // ivar: _isAudioOnly
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) ? startPosition; // ivar: _startPosition


+(id)UUIDFromItemDictionary:(id)arg0 ;
-(BOOL)enabledStateForTrackWithID:(int)arg0 ;
-(id)UUIDOnlyDictionaryRepresentation;
-(id)description;
-(id)initWithDictionary:(id)arg0 resourceLoaderHelper:(id)arg1 contentKeyHelper:(id)arg2 options:(id)arg3 ;
-(id)outOfBandAlternateTracks;
-(id)playbackAccessLog;
-(id)playbackErrorLog;
-(id)selectedMediaArray;
-(struct CGSize )naturalSize;
-(void)setEnabledState:(BOOL)arg0 forTrackWithID:(int)arg1 ;
-(void)setTextStyleRulesUsingArray:(id)arg0 ;


@end


#endif