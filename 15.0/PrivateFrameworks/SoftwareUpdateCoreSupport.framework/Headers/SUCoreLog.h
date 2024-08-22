// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCORELOG_H
#define SUCORELOG_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface SUCoreLog : NSObject

@property (readonly, retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, retain, nonatomic) NSObject<OS_os_log> *oslog; // ivar: _oslog


+(id)sharedLogger;
-(id)initWithCategory:(id)arg0 ;


@end


#endif