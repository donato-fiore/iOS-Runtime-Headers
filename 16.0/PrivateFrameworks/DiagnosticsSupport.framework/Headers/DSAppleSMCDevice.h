// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSAPPLESMCDEVICE_H
#define DSAPPLESMCDEVICE_H


#import <Foundation/Foundation.h>


@interface DSAppleSMCDevice : NSObject

@property unsigned int dataPort; // ivar: _dataPort
@property BOOL isConnectionOpen; // ivar: _isConnectionOpen


-(BOOL)closeAppleSMC;
-(BOOL)openAppleSMC:(int)arg0 ;
-(BOOL)writeDataFor:(id)arg0 value:(*void)arg1 size:(NSUInteger)arg2 ;
-(BOOL)writeValueFor:(id)arg0 andValue:(id)arg1 ;
-(CGFloat)readValueFor:(id)arg0 ;
-(id)init;
-(int)readDataFor:(id)arg0 value:(*void)arg1 size:(NSUInteger)arg2 ;


@end


#endif