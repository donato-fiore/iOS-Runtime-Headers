// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSGPTPTIME_H
#define TSGPTPTIME_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSgPTPTime : NSObject <NSCopying>



@property (readonly, nonatomic, getter=isFrequencyTraceable) BOOL frequencyTraceable; // ivar: _frequencyTraceable
@property (readonly, nonatomic) NSUInteger grandmasterIdentity; // ivar: _grandmasterIdentity
@property (readonly, nonatomic) unsigned short localPortNumber; // ivar: _localPortNumber
@property (readonly, nonatomic) unsigned int nanoseconds;
@property (readonly, nonatomic) NSUInteger nanosecondsSinceEpoch; // ivar: _nanosecondsSinceEpoch
@property (readonly, nonatomic, getter=isPTPTimescale) BOOL ptpTimescale; // ivar: _ptpTimescale
@property (readonly, nonatomic) NSUInteger seconds;
@property (readonly, nonatomic, getter=isTimeTraceable) BOOL timeTraceable; // ivar: _timeTraceable


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithNanosecondsSinceEpoch:(NSUInteger)arg0 onGrandmaster:(NSUInteger)arg1 withLocalPortNumber:(unsigned short)arg2 ptpTimescale:(BOOL)arg3 timeTraceable:(BOOL)arg4 frequencyTraceable:(BOOL)arg5 ;
-(id)initWithSeconds:(NSUInteger)arg0 nanoseconds:(unsigned int)arg1 onGrandmaster:(NSUInteger)arg2 withLocalPortNumber:(unsigned short)arg3 ptpTimescale:(BOOL)arg4 timeTraceable:(BOOL)arg5 frequencyTraceable:(BOOL)arg6 ;


@end


#endif