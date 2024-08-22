// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVSEGMENTEDENCODER_H
#define MSVSEGMENTEDENCODER_H

@class NSCoder, NSMutableDictionary, NSDictionary;
@protocol MSVSegmentedCoding;


#import "MSVSegmentedCodingPackage.h"

@interface MSVSegmentedEncoder : NSCoder

@property (nonatomic) BOOL hasFinished; // ivar: _hasFinished
@property (retain, nonatomic) MSVSegmentedCodingPackage *package; // ivar: _package
@property (retain, nonatomic) NSObject<MSVSegmentedCoding> *rootObject; // ivar: _rootObject
@property (retain, nonatomic) NSMutableDictionary *subcoders; // ivar: _subcoders
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)_coderForKey:(id)arg0 ;
-(id)initWithCodingPackage:(id)arg0 ;
-(id)initWithCodingPackage:(id)arg0 userInfo:(id)arg1 ;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeBytes:(char *)arg0 length:(NSUInteger)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeFloat:(float)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeInt:(int)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeRootObject:(id)arg0 ;
-(void)finishEncoding;


@end


#endif