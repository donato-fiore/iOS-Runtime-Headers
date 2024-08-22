// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUOBJECTSNAPSHOT_H
#define OITSUOBJECTSNAPSHOT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface OITSUObjectSnapshot : NSObject {
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