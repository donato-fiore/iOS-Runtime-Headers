// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPNUMERICDATARECORDER_H
#define _DPNUMERICDATARECORDER_H

@protocol _DPDataRecorder><_DPDataRecorderKeyProperties;

#import <Foundation/Foundation.h>


@interface _DPNumericDataRecorder : NSObject

@property (readonly, nonatomic) NSObject<_DPDataRecorder><_DPDataRecorderKeyProperties> *recorder; // ivar: _recorder


-(BOOL)record:(id)arg0 ;
-(BOOL)record:(id)arg0 metadata:(id)arg1 ;
-(BOOL)recordNumbersVectors:(id)arg0 ;
-(BOOL)recordNumbersVectors:(id)arg0 metadata:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithKey:(id)arg0 ;
-(id)initWithKey:(id)arg0 databaseDirectoryPath:(id)arg1 readOnly:(BOOL)arg2 ;


@end


#endif