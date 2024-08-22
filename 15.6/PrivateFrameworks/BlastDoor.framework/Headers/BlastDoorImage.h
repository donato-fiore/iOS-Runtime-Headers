// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORIMAGE_H
#define BLASTDOORIMAGE_H


#import <Foundation/Foundation.h>


@interface BlastDoorImage : NSObject {
    ? image;
}


@property (nonatomic, readonly) *CGImage cgImage;


-(BOOL)writeToURL:(id)arg0 usingEncoding:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)dataUsingEncoding:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif