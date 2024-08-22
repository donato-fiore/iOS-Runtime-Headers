// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPLINKMETADATADOWNLOADPROGRESSTRANSFORMER_H
#define LPLINKMETADATADOWNLOADPROGRESSTRANSFORMER_H


#import <Foundation/Foundation.h>

#import "LPLinkMetadata.h"

@interface LPLinkMetadataDownloadProgressTransformer : NSObject

@property (nonatomic) NSUInteger bytesLoaded; // ivar: _bytesLoaded
@property (nonatomic) NSInteger downloadState; // ivar: _downloadState
@property (retain, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata


-(id)downloadProgressForTransformer:(id)arg0 ;
-(id)initWithBytesLoaded:(NSUInteger)arg0 downloadState:(NSInteger)arg1 metadata:(id)arg2 ;


@end


#endif