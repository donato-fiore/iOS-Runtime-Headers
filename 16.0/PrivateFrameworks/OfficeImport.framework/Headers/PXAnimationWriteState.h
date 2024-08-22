// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXANIMATIONWRITESTATE_H
#define PXANIMATIONWRITESTATE_H

@class OCXWriteState;

#import <Foundation/Foundation.h>

#import "TCXmlPrefixStreamWriter.h"

@interface PXAnimationWriteState : NSObject {
    NSUInteger mCommonTimeNodeDataId;
    BOOL mHasMainSeqTimeNodeId;
    NSUInteger mMainSeqTimeNodeId;
}


@property (retain, nonatomic) TCXmlPrefixStreamWriter *file; // ivar: mFile
@property (retain, nonatomic) OCXWriteState *writeState; // ivar: mWriteState


-(BOOL)hasMainSeqTimeNodeId;
-(NSUInteger)mainSeqTimeNodeId;
-(NSUInteger)newCommonTimeNodeDataId;
-(id)initWithWriteState:(id)arg0 file:(id)arg1 ;
-(void)setMainSeqTimeNodeId:(NSUInteger)arg0 ;


@end


#endif