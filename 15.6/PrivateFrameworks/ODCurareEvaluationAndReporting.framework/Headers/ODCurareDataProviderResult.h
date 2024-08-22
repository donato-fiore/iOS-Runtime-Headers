// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODCURAREDATAPROVIDERRESULT_H
#define ODCURAREDATAPROVIDERRESULT_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface ODCurareDataProviderResult : NSObject

@property (retain, nonatomic) NSArray *batchProviders; // ivar: _batchProviders
@property (retain, nonatomic) NSArray *dataArray; // ivar: _dataArray
@property (retain, nonatomic) NSArray *dateArray; // ivar: _dateArray
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata


-(id)initWithBatchProviders:(id)arg0 dateArray:(id)arg1 ;
-(id)initWithDataArray:(id)arg0 dateArray:(id)arg1 ;


@end


#endif