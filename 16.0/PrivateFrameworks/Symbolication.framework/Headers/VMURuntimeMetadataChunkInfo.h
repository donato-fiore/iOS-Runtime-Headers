// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMURUNTIMEMETADATACHUNKINFO_H
#define VMURUNTIMEMETADATACHUNKINFO_H


#import <Foundation/Foundation.h>

#import "VMUClassInfo.h"

@interface VMURuntimeMetadataChunkInfo : NSObject {
    BOOL isMetaclass;
    unsigned int type;
    VMUClassInfo *owningClassInfo;
}






@end


#endif