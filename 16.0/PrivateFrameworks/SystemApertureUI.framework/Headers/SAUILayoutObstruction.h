// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUILAYOUTOBSTRUCTION_H
#define SAUILAYOUTOBSTRUCTION_H

@class NSString, UILayoutGuide, UIView;
@protocol SAUILayoutObstructing;

#import <Foundation/Foundation.h>


@interface SAUILayoutObstruction : NSObject <SAUILayoutObstructing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *obstacleIdentifier; // ivar: _obstacleIdentifier
@property (readonly, nonatomic) UILayoutGuide *obstacleLayoutGuide; // ivar: _obstacleLayoutGuide
@property (readonly, weak, nonatomic) UIView *owningView; // ivar: _owningView
@property (readonly) Class superclass;


-(id)initWithOwningView:(id)arg0 identifier:(id)arg1 ;
-(struct CGRect )obstructedFrameInView:(id)arg0 ;


@end


#endif