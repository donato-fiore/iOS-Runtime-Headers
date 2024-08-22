// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIIMAGEENCODER_H
#define PBUIIMAGEENCODER_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "PBUIImageOnDiskFormat.h"

@interface PBUIImageEncoder : NSObject

@property (copy, nonatomic) PBUIImageOnDiskFormat *format; // ivar: _format
@property (copy, nonatomic) NSURL *url; // ivar: _url


-(id)createUIImageWithError:(*id)arg0 ;
-(id)initWithURL:(id)arg0 format:(id)arg1 ;
-(id)saveImage:(struct CGImage *)arg0 error:(*id)arg1 ;
-(id)saveUIImage:(id)arg0 error:(*id)arg1 ;
-(id)writeThenReadBackImage:(id)arg0 error:(*id)arg1 ;
-(void)_transformOptions:(id)arg0 forImageSize:(struct CGSize )arg1 ;


@end


#endif