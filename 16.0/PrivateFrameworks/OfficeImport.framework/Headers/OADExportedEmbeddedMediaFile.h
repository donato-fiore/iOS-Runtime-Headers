// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADEXPORTEDEMBEDDEDMEDIAFILE_H
#define OADEXPORTEDEMBEDDEDMEDIAFILE_H

@class TSPData;


#import "OADEmbeddedMediaFile.h"

@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile {
    BOOL isAudioOnly;
}


@property (retain, nonatomic) TSPData *tspData; // ivar: _tspData


-(BOOL)isAudioOnly;
-(void)setIsAudioOnly:(BOOL)arg0 ;


@end


#endif