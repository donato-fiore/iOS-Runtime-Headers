// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTOCMAPENTRY_H
#define TSWPTOCMAPENTRY_H


#import <Foundation/Foundation.h>

#import "TSWPTOCEntryStyle.h"

@interface TSWPTOCMapEntry : NSObject

@property (nonatomic) BOOL showInTOC; // ivar: _showInTOC
@property (retain, nonatomic) TSWPTOCEntryStyle *tocEntryStyle; // ivar: _tocEntryStyle


-(id)copyWithContext:(id)arg0 ;
-(id)initWithTOCEntryStyle:(id)arg0 showInTOC:(BOOL)arg1 ;


@end


#endif