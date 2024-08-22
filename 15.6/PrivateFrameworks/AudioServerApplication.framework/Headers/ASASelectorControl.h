// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASASELECTORCONTROL_H
#define ASASELECTORCONTROL_H

@class NSArray;


#import "ASAControl.h"

@interface ASASelectorControl : ASAControl

@property (readonly, copy, nonatomic) NSArray *availableItems;
@property (nonatomic) unsigned int currentItem;
@property (nonatomic) NSArray *currentItems; // ivar: _currentItems


-(id)coreAudioClassName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)nameForItem:(unsigned int)arg0 ;


@end


#endif