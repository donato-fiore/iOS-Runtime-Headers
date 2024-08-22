// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFBLUETOOTHHEADPHONEINEARDETECTIONSTATEMUTATION_H
#define _AFBLUETOOTHHEADPHONEINEARDETECTIONSTATEMUTATION_H

@class NSString;
@protocol AFBluetoothHeadphoneInEarDetectionStateMutating;

#import <Foundation/Foundation.h>

#import "AFBluetoothHeadphoneInEarDetectionState.h"

@interface _AFBluetoothHeadphoneInEarDetectionStateMutation : NSObject <AFBluetoothHeadphoneInEarDetectionStateMutating>

 {
    AFBluetoothHeadphoneInEarDetectionState *_base;
    BOOL _isEnabled;
    NSInteger _primaryEarbudSide;
    NSInteger _primaryInEarStatus;
    NSInteger _secondaryInEarStatus;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getIsEnabled;
-(BOOL)isDirty;
-(NSInteger)getPrimaryEarbudSide;
-(NSInteger)getPrimaryInEarStatus;
-(NSInteger)getSecondaryInEarStatus;
-(id)initWithBase:(id)arg0 ;
-(void)setIsEnabled:(BOOL)arg0 ;
-(void)setPrimaryEarbudSide:(NSInteger)arg0 ;
-(void)setPrimaryInEarStatus:(NSInteger)arg0 ;
-(void)setSecondaryInEarStatus:(NSInteger)arg0 ;


@end


#endif