// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCLEANUPHANDLER_H
#define WBSCLEANUPHANDLER_H


#import <Foundation/Foundation.h>


@interface WBSCleanupHandler : NSObject {
    id *_block;
}




-(id)initWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif