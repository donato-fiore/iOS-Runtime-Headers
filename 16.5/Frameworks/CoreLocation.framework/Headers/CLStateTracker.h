// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSTATETRACKER_H
#define CLSTATETRACKER_H


#import <Foundation/Foundation.h>


@interface CLStateTracker : NSObject {
    NSUInteger _handle;
}


@property (readonly, nonatomic) *void identifier;


+(NSUInteger)trackerStateSize;
+(char *)trackerStateTypeName;
-(BOOL)dumpState:(*void)arg0 withSize:(NSUInteger)arg1 hints:(struct os_state_hints_s *)arg2 ;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;


@end


#endif