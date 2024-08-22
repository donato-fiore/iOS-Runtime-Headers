// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIZECONTEXT_H
#define SIZECONTEXT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SizeContext : NSObject {
    NSMutableArray *_windowContextStack;
}




+(id)sharedInstance;
-(BOOL)hasWindowForCurrentContext;
-(id)init;
-(id)windowForCurrentContext;
-(void)popContextFromWindow:(id)arg0 ;
-(void)pushContextWithWindow:(id)arg0 ;


@end


#endif