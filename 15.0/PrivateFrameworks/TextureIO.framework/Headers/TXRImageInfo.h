// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRIMAGEINFO_H
#define TXRIMAGEINFO_H

@class NSError;
@protocol TXRBuffer;

#import <Foundation/Foundation.h>


@interface TXRImageInfo : NSObject

@property (retain, nonatomic) NSObject<TXRBuffer> *buffer; // ivar: _buffer
@property (nonatomic) NSUInteger bytesPerImage; // ivar: _bytesPerImage
@property (nonatomic) NSUInteger bytesPerRow; // ivar: _bytesPerRow
@property (retain) NSError *error; // ivar: _error
@property (nonatomic) NSUInteger offset; // ivar: _offset




@end


#endif