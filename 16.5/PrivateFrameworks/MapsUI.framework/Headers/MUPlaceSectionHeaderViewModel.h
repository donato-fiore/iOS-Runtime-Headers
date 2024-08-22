// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACESECTIONHEADERVIEWMODEL_H
#define MUPLACESECTIONHEADERVIEWMODEL_H

@class UIMenu, NSString;

#import <Foundation/Foundation.h>


@interface MUPlaceSectionHeaderViewModel : NSObject

@property (retain, nonatomic) UIMenu *seeMoreButtonMenu; // ivar: _seeMoreButtonMenu
@property (retain, nonatomic) NSString *seeMoreButtonText; // ivar: _seeMoreButtonText
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly, weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) NSString *titleString; // ivar: _titleString


-(id)initWithTitleString:(id)arg0 ;
-(id)initWithTitleString:(id)arg0 showSeeMore:(BOOL)arg1 ;


@end


#endif