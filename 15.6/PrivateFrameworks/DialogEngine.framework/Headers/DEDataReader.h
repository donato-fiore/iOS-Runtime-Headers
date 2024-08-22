// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDATAREADER_H
#define DEDATAREADER_H

@class NSData;
@protocol DEReader;

#import <Foundation/Foundation.h>


@interface DEDataReader : NSObject <DEReader>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSUInteger dataOffset; // ivar: _dataOffset


-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)readData;
-(id)readDataOfLength:(NSUInteger)arg0 ;
-(void)close;


@end


#endif