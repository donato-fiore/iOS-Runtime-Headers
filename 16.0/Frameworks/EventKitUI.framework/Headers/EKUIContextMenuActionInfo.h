// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUICONTEXTMENUACTIONINFO_H
#define EKUICONTEXTMENUACTIONINFO_H


#import <Foundation/Foundation.h>


@interface EKUIContextMenuActionInfo : NSObject {
    id *_selectionStateBlock;
}


@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) id *configureUIActionBlock; // ivar: _configureUIActionBlock
@property (readonly, nonatomic) NSUInteger group; // ivar: _group
@property (readonly, nonatomic) NSUInteger positionInGroup; // ivar: _positionInGroup
@property (readonly, nonatomic) id *shouldShowBlock; // ivar: _shouldShowBlock
@property (readonly, nonatomic) BOOL showsInEditMenu; // ivar: _showsInEditMenu


-(id)initCalendarMenuPlaceholderInGroup:(NSUInteger)arg0 positionInGroup:(NSUInteger)arg1 ;
// -(id)initWithAction:(NSUInteger)arg0 showsInEditMenu:(BOOL)arg1 group:(NSUInteger)arg2 positionInGroup:(NSUInteger)arg3 shouldShowBlock:(id)arg4 configureUIActionBlock:(unk)arg5 actionBlock:(id)arg6  ;


@end


#endif