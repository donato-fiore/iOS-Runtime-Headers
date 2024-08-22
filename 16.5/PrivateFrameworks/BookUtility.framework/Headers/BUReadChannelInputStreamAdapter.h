// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUREADCHANNELINPUTSTREAMADAPTER_H
#define BUREADCHANNELINPUTSTREAMADAPTER_H

@class NSString;
@protocol BUInputStream, OS_dispatch_data, BUReadChannel;

#import <Foundation/Foundation.h>


@interface BUReadChannelInputStreamAdapter : NSObject <BUInputStream>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_data> *leftoverData; // ivar: _leftoverData
@property (nonatomic) NSInteger offset; // ivar: _offset
@property (retain, nonatomic) NSObject<BUReadChannel> *readChannel; // ivar: _readChannel
@property (readonly) Class superclass;


-(BOOL)canSeek;
-(NSUInteger)readToBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(id)closeLocalStream;
-(id)initWithReadChannel:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)seekToOffset:(NSInteger)arg0 ;


@end


#endif