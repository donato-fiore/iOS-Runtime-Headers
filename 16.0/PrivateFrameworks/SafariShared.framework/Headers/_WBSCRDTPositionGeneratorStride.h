// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WBSCRDTPOSITIONGENERATORSTRIDE_H
#define _WBSCRDTPOSITIONGENERATORSTRIDE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WBSCRDTPosition.h"

@interface _WBSCRDTPositionGeneratorStride : NSObject

@property (readonly, copy, nonatomic) WBSCRDTPosition *afterPosition; // ivar: _afterPosition
@property (readonly, copy, nonatomic) WBSCRDTPosition *beforePosition; // ivar: _beforePosition
@property (readonly, copy, nonatomic) NSArray *recordNames; // ivar: _recordNames


-(id)description;
-(id)initWithRecordNames:(id)arg0 beforePosition:(id)arg1 afterPosition:(id)arg2 ;


@end


#endif