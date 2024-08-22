// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLSPECIFIERTAPHANDLER_H
#define FLSPECIFIERTAPHANDLER_H

@protocol FLSpecifierTapHandlerDelegate;

#import <Foundation/Foundation.h>


@interface FLSpecifierTapHandler : NSObject

@property (weak, nonatomic) NSObject<FLSpecifierTapHandlerDelegate> *delegate; // ivar: _delegate


-(id)description;
-(void)_handleActionForItem:(id)arg0 fromSpecifier:(id)arg1 eventSource:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)actionTapped:(id)arg0 eventSource:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif