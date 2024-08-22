// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSUGGESTIONACTION_H
#define SGSUGGESTIONACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGSuggestionAction : NSObject {
    NSString *_title;
    id *_handler;
}




+(id)actionWithTitle:(id)arg0 handler:(id)arg1 ;
-(id)initWithTitle:(id)arg0 handler:(id)arg1 ;
-(id)title;
-(void)execute;


@end


#endif