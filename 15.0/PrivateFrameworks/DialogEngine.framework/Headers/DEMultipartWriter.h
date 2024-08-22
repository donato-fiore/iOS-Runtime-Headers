// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEMULTIPARTWRITER_H
#define DEMULTIPARTWRITER_H

@protocol DEWriter;

#import <Foundation/Foundation.h>


@interface DEMultipartWriter : NSObject <DEWriter>



@property (nonatomic) BOOL partClosed; // ivar: _partClosed
@property (retain, nonatomic) NSObject<DEWriter> *writer; // ivar: _writer


-(id)init;
-(id)initWithWriter:(id)arg0 ;
-(void)close;
-(void)closeMessage;
-(void)dealloc;
-(void)newPart;
-(void)writeData:(id)arg0 ;


@end


#endif