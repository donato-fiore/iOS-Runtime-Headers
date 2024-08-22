// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSDATARESETREQUEST_H
#define FBSDATARESETREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FBSDataResetRequest : NSObject

@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) NSInteger options; // ivar: _options
@property (copy, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithMode:(NSInteger)arg0 options:(NSInteger)arg1 reason:(id)arg2 ;


@end


#endif