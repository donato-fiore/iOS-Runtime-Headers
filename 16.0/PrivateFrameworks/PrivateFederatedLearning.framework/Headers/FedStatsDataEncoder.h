// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FEDSTATSDATAENCODER_H
#define FEDSTATSDATAENCODER_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface FedStatsDataEncoder : NSObject

@property (retain, nonatomic) NSDictionary *dataTypes; // ivar: _dataTypes
@property (retain, nonatomic) NSArray *typeConfiguration; // ivar: _typeConfiguration


+(BOOL)encodeDataAndRecord:(id)arg0 dataTypeContent:(id)arg1 baseKey:(id)arg2 errorOut:(*id)arg3 ;
+(BOOL)encodeDataAndRecord:(id)arg0 dataTypeContent:(id)arg1 metadata:(id)arg2 baseKey:(id)arg3 errorOut:(*id)arg4 ;
+(BOOL)encodeDataArrayAndRecord:(id)arg0 dataTypeContent:(id)arg1 baseKey:(id)arg2 errorOut:(*id)arg3 ;
+(BOOL)encodeDataArrayAndRecord:(id)arg0 dataTypeContent:(id)arg1 metadata:(id)arg2 baseKey:(id)arg3 errorOut:(*id)arg4 ;
+(id)createWithDataTypeContent:(id)arg0 possibleError:(*id)arg1 ;
+(id)encodeDataArray:(id)arg0 dataTypeContent:(id)arg1 errorOut:(*id)arg2 ;
-(id)decodeFromOneHotVector:(id)arg0 possibleError:(*id)arg1 ;
-(id)decodeFromOneHotVector:(id)arg0 withType:(id)arg1 possibleError:(*id)arg2 ;
-(id)encodeToOneHotVector:(id)arg0 possibleError:(*id)arg1 ;
-(id)encodeToOneHotVector:(id)arg0 withType:(id)arg1 possibleError:(*id)arg2 ;
-(id)initWithDataTypes:(id)arg0 combinationTypes:(id)arg1 ;


@end


#endif