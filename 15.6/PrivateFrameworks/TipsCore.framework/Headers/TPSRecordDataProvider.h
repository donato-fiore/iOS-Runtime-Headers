// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSRECORDDATAPROVIDER_H
#define TPSRECORDDATAPROVIDER_H

@protocol TPSRecordDataProviderDataSource;

#import <Foundation/Foundation.h>


@interface TPSRecordDataProvider : NSObject

@property (weak, nonatomic) NSObject<TPSRecordDataProviderDataSource> *dataSource; // ivar: _dataSource


-(id)initWithDataSource:(id)arg0 ;


@end


#endif