// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSCORENORMALIZATIONMODEL_H
#define ATXSCORENORMALIZATIONMODEL_H

@class NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXScoreNormalizationParameters.h"

@interface ATXScoreNormalizationModel : NSObject <NSCopying, NSSecureCoding>



@property int bufferHead; // ivar: _bufferHead
@property int bufferSize; // ivar: _bufferSize
@property (retain, nonatomic) NSMutableArray *circularBuffer; // ivar: _circularBuffer
@property (nonatomic) BOOL isBufferSorted; // ivar: _isBufferSorted
@property (retain, nonatomic) ATXScoreNormalizationParameters *parameters; // ivar: _parameters


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(id)initWithParameters:(id)arg0 circularBuffer:(id)arg1 bufferHead:(int)arg2 isBufferSorted:(BOOL)arg3 ;
-(id)normalizeScore:(id)arg0 ;
-(void)addScore:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getStateReadyForNormalization;
-(void)resetBuffer;


@end


#endif