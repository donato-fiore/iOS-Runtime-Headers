// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVAUDIOSESSIONCONFIGURATION_H
#define SVAUDIOSESSIONCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SVAudioSessionConfiguration : NSObject

@property (copy, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSString *mode; // ivar: _mode
@property (nonatomic) NSUInteger routeSharingPolicy; // ivar: _routeSharingPolicy


-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(id)initWithCategory:(id)arg0 mode:(id)arg1 policy:(NSUInteger)arg2 ;


@end


#endif