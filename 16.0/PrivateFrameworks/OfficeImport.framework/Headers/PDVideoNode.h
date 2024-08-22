// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDVIDEONODE_H
#define PDVIDEONODE_H



#import "PDMediaNode.h"

@interface PDVideoNode : PDMediaNode {
    BOOL mIsFullScreen;
}




-(BOOL)isFullScreen;
-(void)setIsFullScreen:(BOOL)arg0 ;


@end


#endif