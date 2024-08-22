// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFITNESSMACHINECHARACTERISTICFIELD_H
#define HDFITNESSMACHINECHARACTERISTICFIELD_H


#import <Foundation/Foundation.h>


@interface HDFitnessMachineCharacteristicField : NSObject

@property (readonly, nonatomic) unsigned char correspondingFlagBit; // ivar: _correspondingFlagBit
@property (readonly, nonatomic) unsigned char factor; // ivar: _factor
@property (readonly, nonatomic) unsigned char fieldLength; // ivar: _fieldLength
@property (nonatomic) BOOL flagFieldFlipped; // ivar: _flagFieldFlipped
@property (nonatomic) BOOL isSet; // ivar: _isSet


-(BOOL)isIncludedInFlags:(unsigned int)arg0 ;
-(id)initWithCorrespondingFlagBit:(unsigned char)arg0 fieldLength:(unsigned char)arg1 factor:(unsigned char)arg2 ;
-(id)valueAsData;
-(void)setValueWithBytes:(*char *)arg0 before:(char *)arg1 ;


@end


#endif