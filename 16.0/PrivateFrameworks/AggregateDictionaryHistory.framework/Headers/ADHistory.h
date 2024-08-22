// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADHISTORY_H
#define ADHISTORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ADHistory : NSObject

@property (readonly, nonatomic) NSString *path; // ivar: _path


-(BOOL)distributionsForKeyPrefix:(id)arg0 minDaysSince1970:(int)arg1 maxDaysSince1970:(int)arg2 rowHandler:(id)arg3 ;
-(BOOL)scalarsForKeyPrefix:(id)arg0 minDaysSince1970:(int)arg1 maxDaysSince1970:(int)arg2 rowHandler:(id)arg3 ;
-(id)initWithDefaultPath;
-(id)initWithPath:(id)arg0 ;


@end


#endif