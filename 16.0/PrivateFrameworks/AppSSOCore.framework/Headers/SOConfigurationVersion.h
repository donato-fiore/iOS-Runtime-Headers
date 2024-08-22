// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOCONFIGURATIONVERSION_H
#define SOCONFIGURATIONVERSION_H


#import <Foundation/Foundation.h>


@interface SOConfigurationVersion : NSObject {
    NSInteger _mode;
    int _token;
    NSUInteger _version;
}


@property (readonly, nonatomic) NSInteger version;


+(void)reset;
-(NSInteger)checkVersion;
-(NSUInteger)_state;
-(id)initWithMode:(NSInteger)arg0 ;
-(void)_setStateAndNotify:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)increaseVersionWithMessage:(id)arg0 ;
-(void)setAppSSOUnavailable;


@end


#endif