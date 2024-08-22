// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFACEGALLERYFILEREADER_H
#define ATXFACEGALLERYFILEREADER_H

@class ATXFaceGalleryConfiguration;

#import <Foundation/Foundation.h>


@interface ATXFaceGalleryFileReader : NSObject {
    NSInteger _source;
}


@property (readonly, copy, nonatomic) ATXFaceGalleryConfiguration *configuration;


+(id)_loadConfigurationFromPath:(id)arg0 ;
+(id)_pathForSource:(NSInteger)arg0 ;
-(BOOL)writeConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithSource:(NSInteger)arg0 ;


@end


#endif