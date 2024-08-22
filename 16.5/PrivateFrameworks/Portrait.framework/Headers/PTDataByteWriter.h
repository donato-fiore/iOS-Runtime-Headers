// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTDATABYTEWRITER_H
#define PTDATABYTEWRITER_H

@class NSMutableData, NSString, NSError;
@protocol PTByteWriter;

#import <Foundation/Foundation.h>


@interface PTDataByteWriter : NSObject <PTByteWriter>



@property (retain) NSMutableData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)appendBytes:(*void)arg0 size:(NSUInteger)arg1 ;
-(BOOL)writeBytes:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(id)_errorForSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(id)initWithMutableData:(id)arg0 ;


@end


#endif