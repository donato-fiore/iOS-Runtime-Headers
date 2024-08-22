// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POCONFIGURATIONVERSION_H
#define POCONFIGURATIONVERSION_H


#import <Foundation/Foundation.h>


@interface POConfigurationVersion : NSObject {
    int _token;
    NSUInteger _version;
}


@property (readonly, nonatomic) NSInteger version;


+(void)reset;
-(NSInteger)checkVersion;
-(NSUInteger)_state;
-(id)init;
-(void)_setStateAndNotify:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)increaseVersionWithMessage:(id)arg0 ;
-(void)setPlatformSSOUnavailable;


@end


#endif