// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADIDLECHANGETRACKINGCLEANUPINFO_H
#define CADIDLECHANGETRACKINGCLEANUPINFO_H


#import <Foundation/Foundation.h>


@interface CADIdleChangeTrackingCleanupInfo : NSObject

@property (nonatomic) CGFloat languishPeriod; // ivar: _languishPeriod
@property (nonatomic) int numberOfChanges; // ivar: _numberOfChanges


+(id)serverIdleChangeTrackingCleanupInfo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInfo:(id)arg0 ;
-(id)description;
-(id)initWithLanguishPeriod:(CGFloat)arg0 numberOfChanges:(int)arg1 ;


@end


#endif