// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCXSSTREAM_H
#define OCXSSTREAM_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface OCXSStream : NSObject {
    NSMutableArray *mLevelStack;
}




-(BOOL)hasLevels;
-(BOOL)popLevel;
-(id)init;
-(int)currentContextChildDepth;
-(int)currentContextDepth;
-(void)pushLevel:(int)arg0 name:(char *)arg1 ;


@end


#endif