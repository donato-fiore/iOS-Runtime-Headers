// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSASTREAMDEFLATER_H
#define OSASTREAMDEFLATER_H


#import <Foundation/Foundation.h>


@interface OSAStreamDeflater : NSObject {
    z_stream_s _strm;
    char * _in;
    char * _out;
}


@property BOOL capViolation; // ivar: _capViolation


-(id)copyDeflatedDataFromStream:(struct __sFILE *)arg0 withCap:(unsigned int)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif