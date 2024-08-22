// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDXPCKEYEDARCHIVER_H
#define HMDXPCKEYEDARCHIVER_H

@class HMFObject, NSKeyedArchiver, NSData;



@interface HMDXPCKeyedArchiver : HMFObject

@property (readonly, nonatomic) NSKeyedArchiver *archiver; // ivar: _archiver
@property (readonly, copy) NSData *encodedData;


+(*void)XPCTransportTypeAssociationKey;
-(id)initForWritingWithMessage:(id)arg0 ;
-(void)_configure;
-(void)dealloc;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)finishEncoding;


@end


#endif