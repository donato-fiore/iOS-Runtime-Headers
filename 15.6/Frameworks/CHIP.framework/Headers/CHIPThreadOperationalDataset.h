// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTHREADOPERATIONALDATASET_H
#define CHIPTHREADOPERATIONALDATASET_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface CHIPThreadOperationalDataset : NSObject

@property (readonly, copy, nonatomic) NSData *PSKc; // ivar: _PSKc
@property (nonatomic) unsigned short channel; // ivar: _channel
@property (readonly) OperationalDataset cppThreadOperationalDataset; // ivar: _cppThreadOperationalDataset
@property (readonly, copy, nonatomic) NSData *extendedPANID; // ivar: _extendedPANID
@property (readonly, copy, nonatomic) NSData *masterKey; // ivar: _masterKey
@property (readonly, copy, nonatomic) NSString *networkName; // ivar: _networkName
@property (readonly, copy, nonatomic) NSData *panID; // ivar: _panID


-(BOOL)_checkDataLength:(id)arg0 expectedLength:(NSUInteger)arg1 ;
-(BOOL)_populateCppOperationalDataset;
-(id)asData;
-(id)initWithData:(id)arg0 ;
-(id)initWithNetworkName:(id)arg0 extendedPANID:(id)arg1 masterKey:(id)arg2 PSKc:(id)arg3 channel:(unsigned short)arg4 panID:(id)arg5 ;


@end


#endif