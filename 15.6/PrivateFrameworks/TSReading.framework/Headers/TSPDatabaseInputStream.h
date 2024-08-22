// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDATABASEINPUTSTREAM_H
#define TSPDATABASEINPUTSTREAM_H

@class NSString;
@protocol TSUStreamReadChannel, SFUInputStream;

#import <Foundation/Foundation.h>


@interface TSPDatabaseInputStream : NSObject <TSUStreamReadChannel, SFUInputStream>

 {
    *sqlite3_blob _blob;
    int _offset;
    int _length;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSeek;
-(NSInteger)offset;
-(NSUInteger)readToBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(id)closeLocalStream;
-(id)initWithBlob:(struct sqlite3_blob *)arg0 ;
-(void)close;
-(void)dealloc;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)readWithQueue:(id)arg0 handler:(id)arg1 ;
-(void)seekToOffset:(NSInteger)arg0 ;


@end


#endif