// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWBLOCKBASEDCAACTION_H
#define UIVIEWBLOCKBASEDCAACTION_H

@protocol CAAction;

#import <Foundation/Foundation.h>


@interface UIViewBlockBasedCAAction : NSObject <CAAction>

 {
    id *_block;
}




-(id)initWithActionBlock:(id)arg0 ;
-(id)initWithEmptyBlock:(id)arg0 ;
-(void)runActionForKey:(id)arg0 object:(id)arg1 arguments:(id)arg2 ;


@end


#endif