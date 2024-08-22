// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FBSSNAPSHOTCONTEXT_H
#define _FBSSNAPSHOTCONTEXT_H

@class NSOrderedSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FBSDisplayConfiguration.h"

@interface _FBSSnapshotContext : NSObject <NSCopying>



@property (nonatomic) BOOL allowsProtectedContent; // ivar: _allowsProtectedContent
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (readonly, nonatomic) NSOrderedSet *layers; // ivar: _layers
@property (nonatomic, getter=isOpaque) BOOL opaque; // ivar: _opaque
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGSize snapshotSize; // ivar: _snapshotSize


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDisplayConfiguration:(id)arg0 layer:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg0 layers:(id)arg1 ;


@end


#endif