// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAACCESSINTERVAL_H
#define PAACCESSINTERVAL_H

@class NSString, NSNumber;
@protocol PAAssetIdentifierPoolDelegate;

#import <Foundation/Foundation.h>

#import "PAAccessLogger.h"

@interface PAAccessInterval : NSObject <PAAssetIdentifierPoolDelegate>

 {
    PAAccessLogger *_logger;
    atomic_flag _wasEnded;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *slot; // ivar: _slot
@property (readonly) Class superclass;


+(id)placeholderAccessInterval;
-(id)initWithLogger:(id)arg0 slot:(id)arg1 ;
-(void)dealloc;
-(void)end;
-(void)endWithTimestampAdjustment:(CGFloat)arg0 ;
-(void)recordAccessToAssetIdentifiers:(id)arg0 withVisibilityState:(NSInteger)arg1 accessEventCount:(NSUInteger)arg2 ;


@end


#endif