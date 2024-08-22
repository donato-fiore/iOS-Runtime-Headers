// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKDATASOURCE_H
#define TKDATASOURCE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface TKDataSource : NSObject {
    NSData *_data;
}


@property (readonly) NSData *data;
@property (readonly) char * end;
@property (readonly) char * ptr; // ivar: _ptr


-(BOOL)bytesSafeToRead:(NSInteger)arg0 ;
-(id)dataFromPtr:(char *)arg0 ;
-(id)fetchDataWithLength:(NSInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(unsigned char)fetchByte;


@end


#endif