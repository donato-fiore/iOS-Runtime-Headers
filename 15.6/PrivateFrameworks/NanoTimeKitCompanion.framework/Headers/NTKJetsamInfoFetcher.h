// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKJETSAMINFOFETCHER_H
#define NTKJETSAMINFOFETCHER_H


#import <Foundation/Foundation.h>


@interface NTKJetsamInfoFetcher : NSObject



-(BOOL)getInfo:(struct jetsam_info *)arg0 ;
-(BOOL)resetInterval;
-(void)dealloc;


@end


#endif