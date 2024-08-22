// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETIMAGEGENERATOR_H
#define PLASSETIMAGEGENERATOR_H

@class AVAssetImageGenerator;

#import <Foundation/Foundation.h>


@interface PLAssetImageGenerator : NSObject

@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator; // ivar: _imageGenerator
@property (nonatomic) BOOL inUse; // ivar: _inUse


-(id)initWithAsset:(id)arg0 ;
-(void)dealloc;


@end


#endif