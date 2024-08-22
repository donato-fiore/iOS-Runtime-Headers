// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRKLOGFILEWRITER_H
#define BRKLOGFILEWRITER_H

@class NSMutableArray, NSString;
@protocol BRKLogWriter;


#import "BRKWriter.h"

@interface BRKLogFileWriter : BRKWriter <BRKLogWriter>

 {
    NSMutableArray *_json;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_lock_close;
-(void)_lock_writeJSON:(id)arg0 ;
-(void)close;
-(void)writeJSON:(id)arg0 ;


@end


#endif