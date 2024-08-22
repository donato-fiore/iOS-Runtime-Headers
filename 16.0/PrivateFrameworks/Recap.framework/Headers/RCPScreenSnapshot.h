// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPSCREENSNAPSHOT_H
#define RCPSCREENSNAPSHOT_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface RCPScreenSnapshot : NSObject

@property (nonatomic) NSInteger index; // ivar: _index
@property (retain, nonatomic) UIImage *snapshotImage; // ivar: _snapshotImage
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(id)description;
-(id)init;


@end


#endif