// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADESPRESSOBUFFERHANDLE_H
#define ADESPRESSOBUFFERHANDLE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ADEspressoBufferHandle : NSObject {
    ? _buffer;
    NSString *_name;
}


@property (readonly, nonatomic) NSUInteger channels;
@property (readonly, nonatomic) *void data;
@property (readonly, nonatomic) NSArray *dimensions;
@property (readonly, nonatomic) NSUInteger height;
@property (readonly, nonatomic) NSUInteger width;


-(BOOL)writeToFile:(id)arg0 atomically:(BOOL)arg1 ;
-(NSUInteger)getStorageTypeSize:(int)arg0 ;
-(id)initWithName:(id)arg0 buffer:(struct ? )arg1 ;
-(void)clearBuffer;


@end


#endif