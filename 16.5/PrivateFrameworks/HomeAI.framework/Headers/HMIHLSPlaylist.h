// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIHLSPLAYLIST_H
#define HMIHLSPLAYLIST_H

@class HMFObject, NSString, NSMutableArray;
@protocol HMFLogging;



@interface HMIHLSPlaylist : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableArray *lines; // ivar: _lines
@property (readonly) NSString *playlistString;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithPlaylistString:(id)arg0 ;
-(id)initWithTargetDuration:(CGFloat)arg0 ;
-(void)appendEncryptionModeWithPath:(id)arg0 ;
-(void)appendIFrameOnly;
-(void)appendInitializationSegmentWithPath:(id)arg0 ;
-(void)appendSeparableSegmentWithPath:(id)arg0 duration:(CGFloat)arg1 ;
-(void)appendSeparableSegmentWithPath:(id)arg0 duration:(CGFloat)arg1 byteRange:(struct _NSRange )arg2 ;
-(void)end;
-(void)open;


@end


#endif