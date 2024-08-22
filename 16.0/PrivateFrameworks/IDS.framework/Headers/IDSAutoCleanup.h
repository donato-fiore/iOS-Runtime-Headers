// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSAUTOCLEANUP_H
#define IDSAUTOCLEANUP_H


#import <Foundation/Foundation.h>


@interface IDSAutoCleanup : NSObject {
    id *_cleanupBlock;
    int _accessCount;
}




-(id)initWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)incrementAccessCount;


@end


#endif