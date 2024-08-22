// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKSNAPSHOTCONFIGURATION_H
#define WKSNAPSHOTCONFIGURATION_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WKSnapshotConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL afterScreenUpdates; // ivar: _afterScreenUpdates
@property (nonatomic) CGRect rect; // ivar: _rect
@property (copy, nonatomic) NSNumber *snapshotWidth; // ivar: _snapshotWidth


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif