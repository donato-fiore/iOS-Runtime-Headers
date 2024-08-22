// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPTLVCREATOR_H
#define HAPTLVCREATOR_H

@class HMFObject;



@interface HAPTLVCreator : HMFObject {
    ? _tlv;
    BOOL _addHasFailed;
}




+(id)creator;
+(id)creatorWithBufferSize:(NSUInteger)arg0 ;
-(BOOL)addTLV:(NSUInteger)arg0 data:(id)arg1 ;
-(BOOL)addTLV:(NSUInteger)arg0 length:(NSUInteger)arg1 floatNumber:(id)arg2 ;
-(BOOL)addTLV:(NSUInteger)arg0 length:(NSUInteger)arg1 number:(id)arg2 ;
-(BOOL)addTLV:(NSUInteger)arg0 number:(id)arg1 ;
-(BOOL)addTLV:(NSUInteger)arg0 string:(id)arg1 ;
-(BOOL)addTLV:(NSUInteger)arg0 uuid:(id)arg1 ;
-(id)initWithBufferSize:(NSUInteger)arg0 ;
-(id)serialize;
-(void)dealloc;


@end


#endif