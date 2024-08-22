// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DVTFILESTREAM_H
#define DVTFILESTREAM_H

@class NSString, NSFileHandle;
@protocol DVTInputStream;

#import <Foundation/Foundation.h>


@interface DVTFileStream : NSObject <DVTInputStream>

 {
    NSUInteger _fileSize;
    NSUInteger _currentRead;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSFileHandle *file; // ivar: _fileHandle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPeek;


-(BOOL)hasData;
-(id)initWithFD:(int)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)peek:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)read:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)readToEnd:(*id)arg0 ;
-(void)_updateFileSize;


@end


#endif