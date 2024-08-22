// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDFRAGMENTATIONSTREAMTUPLE_H
#define HMDFRAGMENTATIONSTREAMTUPLE_H

@class HMFObject, NSDate, HAPFragmentationStream, HMFMessage, NSString;



@interface HMDFragmentationStreamTuple : HMFObject

@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) HAPFragmentationStream *fragmentationStream; // ivar: _fragmentationStream
@property (retain, nonatomic) HMFMessage *lastMessage; // ivar: _lastMessage
@property (readonly, nonatomic) NSString *objectUUID; // ivar: _objectUUID


+(id)tupleWithFragmentationStreamForObject:(id)arg0 delegate:(id)arg1 ;
-(id)initWithFragmentationStreamForObject:(id)arg0 delegate:(id)arg1 ;
-(void)close;


@end


#endif