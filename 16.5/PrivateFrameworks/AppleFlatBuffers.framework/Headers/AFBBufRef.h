// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFBBUFREF_H
#define AFBBUFREF_H

@class NSData;

#import <Foundation/Foundation.h>


@interface AFBBufRef : NSObject {
    NSData *_data;
    *__CFAllocator _cfReleaseBackingDataDeallocator;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) *__CFAllocator deallocator;


-(id)initWithData:(id)arg0 ;
-(void)dealloc;
-(void)releaseBuf;
-(void)retainBuf;


@end


#endif