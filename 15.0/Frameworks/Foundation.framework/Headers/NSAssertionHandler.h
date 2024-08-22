// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSASSERTIONHANDLER_H
#define NSASSERTIONHANDLER_H


#import <Foundation/Foundation.h>


@interface NSAssertionHandler : NSObject {
    *void _reserved;
}




+(id)currentHandler;
-(void)handleFailureInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSInteger)arg2 description:(id)arg3 ;
-(void)handleFailureInMethod:(SEL)arg0 object:(id)arg1 file:(id)arg2 lineNumber:(NSInteger)arg3 description:(id)arg4 ;


@end


#endif