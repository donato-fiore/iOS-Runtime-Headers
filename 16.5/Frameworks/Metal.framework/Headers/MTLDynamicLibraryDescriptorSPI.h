// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDYNAMICLIBRARYDESCRIPTORSPI_H
#define MTLDYNAMICLIBRARYDESCRIPTORSPI_H

@class NSURL;
@protocol NSCopying, MTLLibrary;

#import <Foundation/Foundation.h>


@interface MTLDynamicLibraryDescriptorSPI : NSObject <NSCopying>



@property (retain, nonatomic) NSObject<MTLLibrary> *library; // ivar: _library
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif