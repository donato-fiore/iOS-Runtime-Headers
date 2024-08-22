// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXACTIONACTIVITYGROUP_H
#define SXACTIONACTIVITYGROUP_H

@class NSMutableArray, NSString, UIView;
@protocol SXActionActivityGroup;

#import <Foundation/Foundation.h>


@interface SXActionActivityGroup : NSObject <SXActionActivityGroup>



@property (retain, nonatomic) NSMutableArray *activities; // ivar: _activities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 sourceView:(id)arg1 ;
-(void)addActivity:(id)arg0 ;


@end


#endif