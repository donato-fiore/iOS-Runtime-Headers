// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXNAVIGATIONLISTACTIONITEM_H
#define PXNAVIGATIONLISTACTIONITEM_H

@class NSString;


#import "PXNavigationListItem.h"

@interface PXNavigationListActionItem : PXNavigationListItem {
    NSString *_glyphImageName;
    NSInteger _style;
}


@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType


-(BOOL)isEqualToNavigationListItem:(id)arg0 ;
-(NSInteger)style;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)glyphImageName;
-(id)initWithActionType:(id)arg0 ;
-(id)representedObject;


@end


#endif