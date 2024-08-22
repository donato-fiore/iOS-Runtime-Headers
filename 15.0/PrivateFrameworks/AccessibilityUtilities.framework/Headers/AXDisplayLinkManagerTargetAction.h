// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXDISPLAYLINKMANAGERTARGETACTION_H
#define AXDISPLAYLINKMANAGERTARGETACTION_H


#import <Foundation/Foundation.h>


@interface AXDisplayLinkManagerTargetAction : NSObject

@property (nonatomic) SEL actionSelector; // ivar: _actionSelector
@property (nonatomic) NSUInteger displayDidRefreshCount; // ivar: _displayDidRefreshCount
@property (retain, nonatomic) id *target; // ivar: _target


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTarget:(id)arg0 actionSelector:(SEL)arg1 ;
-(void)displayDidRefresh:(id)arg0 ;


@end


#endif