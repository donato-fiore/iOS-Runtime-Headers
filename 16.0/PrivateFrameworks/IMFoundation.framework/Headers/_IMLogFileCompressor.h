// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IMLOGFILECOMPRESSOR_H
#define _IMLOGFILECOMPRESSOR_H

@class NSMutableArray;
@protocol IMFileCopierDelegate;

#import <Foundation/Foundation.h>


@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate>

 {
    NSMutableArray *_archivers;
}




+(id)sharedInstance;
-(id)init;
-(void)compressPath:(id)arg0 toPath:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg0 ;
-(void)fileCopierDidStart:(id)arg0 ;


@end


#endif