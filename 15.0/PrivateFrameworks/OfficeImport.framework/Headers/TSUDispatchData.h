// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUDISPATCHDATA_H
#define TSUDISPATCHDATA_H

@protocol OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface TSUDispatchData : NSObject {
    NSObject<OS_dispatch_data> *_data;
}


@property (nonatomic) BOOL alwaysDefragmentData; // ivar: _alwaysDefragmentData
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *data;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *defragmentedData; // ivar: _defragmentedData
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *fragmentedData; // ivar: _fragmentedData
@property (readonly, nonatomic) NSUInteger fragmentsCount; // ivar: _fragmentsCount
@property (nonatomic) NSUInteger maxFragmentsCount; // ivar: _maxFragmentsCount
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


-(id)init;
-(id)initWithData:(id)arg0 ;
-(void)append:(id)arg0 ;
-(void)defragmentData;


@end


#endif