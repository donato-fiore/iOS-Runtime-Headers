// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDATAWRITER_H
#define DEDATAWRITER_H

@class NSMutableData;
@protocol DEWriter;

#import <Foundation/Foundation.h>


@interface DEDataWriter : NSObject <DEWriter>



@property (retain, nonatomic) NSMutableData *data; // ivar: _data


-(id)init;
-(void)close;
-(void)writeData:(id)arg0 ;


@end


#endif