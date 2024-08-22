// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPBODYREP_H
#define TPBODYREP_H

@class TSWPRep, NSSet;


#import "TPBodyLayout.h"

@interface TPBodyRep : TSWPRep {
    NSSet *_lastSelectedInfos;
}


@property (readonly, nonatomic) TPBodyLayout *bodyLayout; // ivar: _bodyLayout


-(id)storage;


@end


#endif