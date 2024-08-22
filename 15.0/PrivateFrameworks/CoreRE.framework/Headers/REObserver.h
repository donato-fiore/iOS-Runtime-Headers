// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REOBSERVER_H
#define REOBSERVER_H

@class NSString, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface REObserver : NSObject

@property (nonatomic) *unk observerCallback; // ivar: observerCallback
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSUserDefaults *userDefault; // ivar: _userDefault


-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif