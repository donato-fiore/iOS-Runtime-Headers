// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUAPPLICATIONWORKSPACE_H
#define TUAPPLICATIONWORKSPACE_H

@class LSApplicationWorkspace;

#import <Foundation/Foundation.h>


@interface TUApplicationWorkspace : NSObject

@property (readonly, nonatomic) LSApplicationWorkspace *applicationWorkspace; // ivar: _applicationWorkspace


+(id)shared;
-(id)initWithApplicationWorkspace:(id)arg0 ;
-(void)openSensitiveURL:(id)arg0 options:(id)arg1 ;


@end


#endif