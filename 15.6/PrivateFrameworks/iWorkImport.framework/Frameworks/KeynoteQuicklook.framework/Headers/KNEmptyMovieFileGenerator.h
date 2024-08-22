// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNEMPTYMOVIEFILEGENERATOR_H
#define KNEMPTYMOVIEFILEGENERATOR_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface KNEmptyMovieFileGenerator : NSObject {
    CGFloat _duration;
}


@property (readonly, nonatomic) NSURL *generatedFileURL; // ivar: _generatedFileURL


-(id)init;
-(id)initWithGeneratedFileURL:(id)arg0 duration:(CGFloat)arg1 ;
-(void)generateFileWithCompletionHandler:(id)arg0 ;


@end


#endif