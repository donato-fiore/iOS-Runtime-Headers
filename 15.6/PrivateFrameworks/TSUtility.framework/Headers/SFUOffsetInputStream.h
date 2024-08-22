// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUOFFSETINPUTSTREAM_H
#define SFUOFFSETINPUTSTREAM_H

@class NSString;
@protocol SFUInputStream;

#import <Foundation/Foundation.h>


@interface SFUOffsetInputStream : NSObject <SFUInputStream>

 {
    id<SFUInputStream> *mInputStream;
    NSInteger mInitialOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSeek;
-(NSInteger)offset;
-(NSUInteger)readToBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(id)closeLocalStream;
-(id)initWithInputStream:(id)arg0 ;
-(id)initWithInputStream:(id)arg0 initialOffset:(NSInteger)arg1 ;
-(void)close;
-(void)dealloc;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)seekToOffset:(NSInteger)arg0 ;


@end


#endif