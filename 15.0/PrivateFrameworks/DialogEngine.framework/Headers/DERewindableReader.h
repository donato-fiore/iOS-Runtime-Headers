// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEREWINDABLEREADER_H
#define DEREWINDABLEREADER_H

@class NSMutableData;
@protocol DEReader;

#import <Foundation/Foundation.h>


@interface DERewindableReader : NSObject <DEReader>



@property (retain, nonatomic) NSObject<DEReader> *reader; // ivar: _reader
@property (retain, nonatomic) NSMutableData *rewindData; // ivar: _rewindData
@property (nonatomic) NSUInteger rewindOffset; // ivar: _rewindOffset
@property (nonatomic) BOOL rewound; // ivar: _rewound


-(BOOL)isRewindable;
-(BOOL)rewind;
-(id)init;
-(id)initWithReader:(id)arg0 ;
-(id)readData;
-(id)readDataOfLength:(NSUInteger)arg0 ;
-(void)close;
-(void)dealloc;
-(void)disableRewind;


@end


#endif