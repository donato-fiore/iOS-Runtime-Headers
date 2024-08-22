// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRDEFAULTBUFFER_H
#define TXRDEFAULTBUFFER_H

@class NSMutableData, NSString;
@protocol TXRBuffer;

#import <Foundation/Foundation.h>


@interface TXRDefaultBuffer : NSObject <TXRBuffer>

 {
    NSMutableData *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithData:(id)arg0 zone:(struct _NSZone *)arg1 ;
-(id)initWithLength:(NSUInteger)arg0 ;
-(id)map;
-(void)dealloc;


@end


#endif