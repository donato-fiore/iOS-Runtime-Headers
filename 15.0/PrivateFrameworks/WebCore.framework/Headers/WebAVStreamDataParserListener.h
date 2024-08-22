// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBAVSTREAMDATAPARSERLISTENER_H
#define WEBAVSTREAMDATAPARSERLISTENER_H

@class AVStreamDataParser, NSString;
@protocol AVStreamDataParserOutputHandling;

#import <Foundation/Foundation.h>


@interface WebAVStreamDataParserListener : NSObject <AVStreamDataParserOutputHandling>

 {
    AVStreamDataParser *_parser;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property *void parent; // ivar: _parent
@property (readonly) Class superclass;


-(id)initWithParser:(id)arg0 parent:(*void)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)streamDataParser:(id)arg0 didFailToParseStreamDataWithError:(id)arg1 ;
-(void)streamDataParser:(id)arg0 didParseStreamDataAsAsset:(id)arg1 ;
-(void)streamDataParser:(id)arg0 didParseStreamDataAsAsset:(id)arg1 withDiscontinuity:(BOOL)arg2 ;
-(void)streamDataParser:(id)arg0 didProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2 ;
-(void)streamDataParser:(id)arg0 didProvideMediaData:(struct opaqueCMSampleBuffer *)arg1 forTrackID:(int)arg2 mediaType:(id)arg3 flags:(NSUInteger)arg4 ;
-(void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg0 forTrackID:(int)arg1 ;


@end


#endif