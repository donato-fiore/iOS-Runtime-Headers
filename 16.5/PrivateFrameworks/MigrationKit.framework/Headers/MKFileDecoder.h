// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFILEDECODER_H
#define MKFILEDECODER_H

@class NSString;
@protocol MKAssetDecoder;

#import <Foundation/Foundation.h>


@interface MKFileDecoder : NSObject <MKAssetDecoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)extractFormatOfAsset:(id)arg0 ;


@end


#endif