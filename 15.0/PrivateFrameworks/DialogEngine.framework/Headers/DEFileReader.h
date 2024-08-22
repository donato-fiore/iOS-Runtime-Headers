// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEFILEREADER_H
#define DEFILEREADER_H

@class NSFileHandle, NSURL;
@protocol DEReader;

#import <Foundation/Foundation.h>


@interface DEFileReader : NSObject <DEReader>



@property (retain, nonatomic) NSFileHandle *file; // ivar: _file
@property (retain, nonatomic) NSURL *src; // ivar: _src


-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)readData;
-(id)readDataOfLength:(NSUInteger)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif