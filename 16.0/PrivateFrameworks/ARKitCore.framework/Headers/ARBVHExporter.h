// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARBVHEXPORTER_H
#define ARBVHEXPORTER_H

@class NSString, NSOutputStream;

#import <Foundation/Foundation.h>


@interface ARBVHExporter : NSObject {
    NSString *_filePath;
    NSString *_tmpFilePath;
    int _numberFrames;
    ? _scale;
    NSInteger _exportType;
    NSOutputStream *_framesStreamToFile;
}


@property (readonly, nonatomic) BOOL running; // ivar: _running


+(id)headerByApplyingScale;
+(id)liftedSkeletonHeaderByApplyingScale;
+(id)stickFigureHeaderByApplyingScale;
-(id)initWithFilePath:(id)arg0 type:(NSInteger)arg1 scale;
-(void)appendBodyAnchor:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif