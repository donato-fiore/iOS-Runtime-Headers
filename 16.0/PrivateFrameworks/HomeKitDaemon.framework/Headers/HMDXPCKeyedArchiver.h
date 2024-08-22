// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDXPCKEYEDARCHIVER_H
#define HMDXPCKEYEDARCHIVER_H

@class HMFObject, NSKeyedArchiver;



@interface HMDXPCKeyedArchiver : HMFObject

@property (readonly, nonatomic) NSKeyedArchiver *archiver; // ivar: _archiver


-(id)encodedData;
-(id)initForWritingWithMessage:(id)arg0 ;
-(void)_configure;
-(void)dealloc;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)finishEncoding;


@end


#endif