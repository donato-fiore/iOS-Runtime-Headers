// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDRVINTERACTIONDELEGATE_H
#define DDRVINTERACTIONDELEGATE_H

@class RVItem, NSString;
@protocol DDDetectionControllerInteractionDelegate;

#import <Foundation/Foundation.h>


@interface DDRVInteractionDelegate : NSObject <DDDetectionControllerInteractionDelegate>

 {
    RVItem *_item;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithItem:(id)arg0 ;
-(void)actionDidFinish:(id)arg0 ;
-(void)actionWillStart:(id)arg0 ;


@end


#endif