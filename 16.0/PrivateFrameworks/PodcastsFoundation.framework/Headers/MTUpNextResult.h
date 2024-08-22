// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTUPNEXTRESULT_H
#define MTUPNEXTRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTUpNextResult : NSObject

@property (copy, nonatomic) NSString *episodeUuid; // ivar: _episodeUuid
@property (nonatomic) CGFloat modifiedDate; // ivar: _modifiedDate
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate


-(void)updateFor:(id)arg0 ;


@end


#endif