// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DESIZEWRITER_H
#define DESIZEWRITER_H

@protocol DEWriter;

#import <Foundation/Foundation.h>


@interface DESizeWriter : NSObject <DEWriter>



@property (nonatomic) NSUInteger size; // ivar: _size


-(id)init;
-(void)close;
-(void)writeData:(id)arg0 ;


@end


#endif