// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNTCC_H
#define CNTCC_H

@protocol CNTCC;

#import <Foundation/Foundation.h>


@interface CNTCC : NSObject

@property (retain, nonatomic) NSObject<CNTCC> *tccServices; // ivar: _tccServices


+(id)sharedInstance;
-(int)accessPreflight;
-(void)simulate:(NSInteger)arg0 ;


@end


#endif