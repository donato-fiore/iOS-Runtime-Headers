// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCODER_H
#define CSCODER_H

@class NSData;
@protocol CSCoderData;

#import <Foundation/Foundation.h>


@interface CSCoder : NSObject <CSCoderData>



@property (readonly, nonatomic) *_MDPlistContainer container; // ivar: _container
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) BOOL finalized; // ivar: _finalized


+(id)encodeURLPreservingSecurityScope:(id)arg0 ;
-(id)init;
-(struct _MDPlistContainer *)plistContainer;
-(void)beginArray;
-(void)beginDictionary;
-(void)beginType:(char *)arg0 ;
-(void)dealloc;
-(void)encodeBool:(BOOL)arg0 ;
-(void)encodeData:(*void)arg0 length:(NSInteger)arg1 ;
-(void)encodeDouble:(CGFloat)arg0 ;
-(void)encodeInt32:(int)arg0 ;
-(void)encodeInt64:(NSInteger)arg0 ;
-(void)encodeMDPlistObject:(struct ? )arg0 ;
-(void)encodeNSString:(id)arg0 ;
-(void)encodeObject:(id)arg0 ;
-(void)encodeObject:(id)arg0 forKey:(char *)arg1 keyLength:(NSInteger)arg2 ;
-(void)encodeObject:(id)arg0 withKey:(id)arg1 ;
-(void)encodeString:(char *)arg0 ;
-(void)encodeString:(char *)arg0 length:(NSInteger)arg1 ;
-(void)encodeString:(char *)arg0 stringLength:(NSInteger)arg1 forKey:(char *)arg2 keyLength:(NSInteger)arg3 ;
-(void)endArray;
-(void)endDictionary;
-(void)endType;


@end


#endif