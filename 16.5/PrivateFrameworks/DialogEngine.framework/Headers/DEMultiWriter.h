// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEMULTIWRITER_H
#define DEMULTIWRITER_H

@class NSMutableData, NSArray;
@protocol DEWriter;

#import <Foundation/Foundation.h>


@interface DEMultiWriter : NSObject <DEWriter>



@property (retain, nonatomic) NSMutableData *data; // ivar: _data
@property (retain, nonatomic) NSArray *writers; // ivar: _writers


-(id)init;
-(id)initWithWriters:(id)arg0 ;
-(void)close;
-(void)writeData:(id)arg0 ;


@end


#endif