// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTHREADOPERATIONALDATASET_H
#define MTRTHREADOPERATIONALDATASET_H

@class NSData, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRThreadOperationalDataset : NSObject

@property (readonly, copy, nonatomic) NSData *PSKc; // ivar: _PSKc
@property (nonatomic) unsigned short channel;
@property (copy, nonatomic) NSNumber *channelNumber; // ivar: _channelNumber
@property (readonly) OperationalDataset cppThreadOperationalDataset; // ivar: _cppThreadOperationalDataset
@property (readonly, copy, nonatomic) NSData *extendedPANID; // ivar: _extendedPANID
@property (readonly, copy, nonatomic) NSData *masterKey; // ivar: _masterKey
@property (readonly, copy, nonatomic) NSString *networkName; // ivar: _networkName
@property (readonly, copy, nonatomic) NSData *panID; // ivar: _panID


-(BOOL)_checkDataLength:(id)arg0 expectedLength:(NSUInteger)arg1 ;
-(BOOL)_populateCppOperationalDataset;
-(id)data;
-(id)initWithData:(id)arg0 ;
-(id)initWithNetworkName:(id)arg0 extendedPANID:(id)arg1 masterKey:(id)arg2 PSKc:(id)arg3 channel:(unsigned short)arg4 panID:(id)arg5 ;
-(id)initWithNetworkName:(id)arg0 extendedPANID:(id)arg1 masterKey:(id)arg2 PSKc:(id)arg3 channelNumber:(id)arg4 panID:(id)arg5 ;


@end


#endif