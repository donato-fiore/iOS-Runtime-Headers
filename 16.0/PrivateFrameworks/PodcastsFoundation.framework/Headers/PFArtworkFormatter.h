// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFARTWORKFORMATTER_H
#define PFARTWORKFORMATTER_H


#import <Foundation/Foundation.h>


@interface PFArtworkFormatter : NSObject



+(id)formatArtworkUrlWithString:(id)arg0 for:(struct CGSize )arg1 cropCode:(id)arg2 fileExtension:(id)arg3 ;
+(id)formatArtworkUrlWithUrl:(id)arg0 for:(struct CGSize )arg1 cropCode:(id)arg2 fileExtension:(id)arg3 ;
-(id)init;


@end


#endif