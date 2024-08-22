// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUOBJECTSNAPSHOT_H
#define TSUOBJECTSNAPSHOT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSUObjectSnapshot : NSObject {
    NSUInteger mEntryCount;
    **void mSnapshot;
    NSArray *mCompared;
}




-(id)init;
-(void)calibrate:(id)arg0 ;
-(void)compare;
-(void)dealloc;
-(void)p_clear;


@end


#endif