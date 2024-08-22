// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HLPHELPSECTIONITEM_H
#define HLPHELPSECTIONITEM_H

@class NSArray;


#import "HLPHelpItem.h"

@interface HLPHelpSectionItem : HLPHelpItem

@property (copy, nonatomic) NSArray *children; // ivar: _children
@property (nonatomic, getter=isOpen) BOOL open; // ivar: _open


-(id)debugDescription;


@end


#endif