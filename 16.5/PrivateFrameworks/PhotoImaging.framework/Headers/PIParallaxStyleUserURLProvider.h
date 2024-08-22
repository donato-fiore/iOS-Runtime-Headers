// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXSTYLEUSERURLPROVIDER_H
#define PIPARALLAXSTYLEUSERURLPROVIDER_H

@class NSURL;
@protocol PIParallaxStyleURLProvider;

#import <Foundation/Foundation.h>


@interface PIParallaxStyleUserURLProvider : NSObject <PIParallaxStyleURLProvider>



@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL


-(id)init;
-(id)initWithBaseURL:(id)arg0 ;
-(id)urlForIdentifier:(id)arg0 ;


@end


#endif