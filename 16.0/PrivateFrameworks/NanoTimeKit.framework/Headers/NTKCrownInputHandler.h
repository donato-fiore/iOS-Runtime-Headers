// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCROWNINPUTHANDLER_H
#define NTKCROWNINPUTHANDLER_H

@class NSString;
@protocol NTKClockHardwareInput, NTKCrownInputHandlerDelegate;

#import <Foundation/Foundation.h>


@interface NTKCrownInputHandler : NSObject <NTKClockHardwareInput>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCrownInputHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat offsetPerRevolution;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly) Class superclass;
@property (nonatomic) BOOL useWideIdleCheck; // ivar: _useWideIdleCheck


-(BOOL)_handlePhysicalButton:(NSUInteger)arg0 event:(NSUInteger)arg1 ;
-(BOOL)_wheelChangedWithEvent:(id)arg0 ;
-(id)init;
-(void)generateMajorDetents;
-(void)generateMinorDetents;


@end


#endif