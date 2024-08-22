// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPDATARECORDER_H
#define _DPDATARECORDER_H

@class NSString;
@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

#import <Foundation/Foundation.h>

#import "_DPKeyProperties.h"

@interface _DPDataRecorder : NSObject <_DPDataRecorder, _DPDataRecorderKeyProperties>



@property (readonly, nonatomic) BOOL bitStringAlgorithm; // ivar: _bitStringAlgorithm
@property (readonly, nonatomic) BOOL directUpload; // ivar: _directUpload
@property (readonly, nonatomic) NSUInteger fragmentCount; // ivar: _fragmentCount
@property (readonly, nonatomic) NSUInteger fragmentWidth; // ivar: _fragmentWidth
@property (readonly, copy, nonatomic) NSString *keyName; // ivar: _keyName
@property (readonly, nonatomic) _DPKeyProperties *keyProperties; // ivar: _keyProperties
@property (readonly, nonatomic) CGFloat privacyParameter; // ivar: _privacyParameter
@property (readonly, nonatomic) NSObject *randomizer; // ivar: _randomizer
@property (readonly, nonatomic) NSUInteger range; // ivar: _range


-(id)description;
-(id)init;
-(id)initWithKey:(id)arg0 ;
-(void)recordBitValues:(id)arg0 ;
-(void)recordBitValues:(id)arg0 metadata:(id)arg1 ;
-(void)recordBitVectors:(id)arg0 ;
-(void)recordBitVectors:(id)arg0 metadata:(id)arg1 ;
-(void)recordFloatVectors:(id)arg0 ;
-(void)recordFloatVectors:(id)arg0 metadata:(id)arg1 ;
-(void)recordNumbers:(id)arg0 ;
-(void)recordNumbers:(id)arg0 metadata:(id)arg1 ;
-(void)recordNumbersVectors:(id)arg0 ;
-(void)recordNumbersVectors:(id)arg0 metadata:(id)arg1 ;
-(void)recordStrings:(id)arg0 ;
-(void)recordStrings:(id)arg0 metadata:(id)arg1 ;
-(void)recordWords:(id)arg0 ;


@end


#endif