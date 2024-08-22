// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRESIZEDARTWORKURLPROVIDER_H
#define MTRESIZEDARTWORKURLPROVIDER_H


#import <Foundation/Foundation.h>


@interface MTResizedArtworkURLProvider : NSObject



+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(id)init;
-(id)resizedArtworkURLString:(id)arg0 withDimension:(NSUInteger)arg1 ;


@end


#endif