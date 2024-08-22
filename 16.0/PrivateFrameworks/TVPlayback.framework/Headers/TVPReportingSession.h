// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPREPORTINGSESSION_H
#define TVPREPORTINGSESSION_H

@class RTCReporting;
@protocol TVPMediaItem;

#import <Foundation/Foundation.h>


@interface TVPReportingSession : NSObject

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // ivar: _mediaItem
@property (retain, nonatomic) RTCReporting *reporter; // ivar: _reporter


+(void)initialize;
-(id)initWithMediaItem:(id)arg0 ;
-(void)_sendEvent:(id)arg0 withCategory:(unsigned short)arg1 type:(unsigned short)arg2 values:(id)arg3 ;
-(void)reportDownloadFinishedWithResult:(NSInteger)arg0 error:(id)arg1 ;


@end


#endif