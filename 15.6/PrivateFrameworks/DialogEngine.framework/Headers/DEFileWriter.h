// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEFILEWRITER_H
#define DEFILEWRITER_H

@class NSURL, NSFileHandle;
@protocol DEWriter;

#import <Foundation/Foundation.h>


@interface DEFileWriter : NSObject <DEWriter>



@property (retain, nonatomic) NSURL *dest; // ivar: _dest
@property (retain, nonatomic) NSFileHandle *file; // ivar: _file


-(id)init;
-(id)initWithURL:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)writeData:(id)arg0 ;


@end


#endif