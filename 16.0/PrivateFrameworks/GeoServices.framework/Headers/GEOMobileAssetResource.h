// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMOBILEASSETRESOURCE_H
#define GEOMOBILEASSETRESOURCE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface GEOMobileAssetResource : NSObject {
    NSInteger _sandboxExtension;
}


@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL


-(id)initWithURL:(id)arg0 sandboxExtensionData:(id)arg1 ;
-(void)dealloc;


@end


#endif