// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPFLOATVALUERECORDER_H
#define _DPFLOATVALUERECORDER_H

@protocol _DPDataRecorder><_DPDataRecorderKeyProperties;

#import <Foundation/Foundation.h>


@interface _DPFloatValueRecorder : NSObject

@property (readonly, nonatomic) NSObject<_DPDataRecorder><_DPDataRecorderKeyProperties> *recorder; // ivar: _recorder


-(BOOL)recordFloatVectors:(id)arg0 ;
-(BOOL)recordFloatVectors:(id)arg0 metadata:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithKey:(id)arg0 ;
-(id)initWithKey:(id)arg0 databaseDirectoryPath:(id)arg1 readOnly:(BOOL)arg2 ;


@end


#endif