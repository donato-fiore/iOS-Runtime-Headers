// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMBUIMEDIATABLECELLDOWNLOADSTATE_H
#define NMBUIMEDIATABLECELLDOWNLOADSTATE_H


#import <Foundation/Foundation.h>


@interface NMBUIMediaTableCellDownloadState : NSObject

@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)initWithState:(NSUInteger)arg0 progress:(CGFloat)arg1 ;


@end


#endif