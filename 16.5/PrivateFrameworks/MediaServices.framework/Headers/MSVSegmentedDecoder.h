// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVSEGMENTEDDECODER_H
#define MSVSEGMENTEDDECODER_H

@class NSCoder, NSArray, NSDictionary;


#import "MSVSegmentedCodingPackage.h"

@interface MSVSegmentedDecoder : NSCoder

@property (retain, nonatomic) MSVSegmentedCodingPackage *package; // ivar: _package
@property (retain, nonatomic) Class rootClass; // ivar: _rootClass
@property (retain, nonatomic) NSArray *subcoders; // ivar: _subcoders
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)decodedObjectOfClass:(Class)arg0 fromPackage:(id)arg1 error:(*id)arg2 ;
+(id)decodedObjectOfClass:(Class)arg0 fromPackage:(id)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
+(id)decodedObjectOfClasses:(id)arg0 fromPackage:(id)arg1 error:(*id)arg2 ;
+(id)decodedObjectOfClasses:(id)arg0 fromPackage:(id)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
-(BOOL)containsValueForKey:(id)arg0 ;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(char *)decodeBytesForKey:(id)arg0 returnedLength:(*NSUInteger)arg1 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)_coderForKey:(id)arg0 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)decodeRootObjectOfClass:(Class)arg0 error:(*id)arg1 ;
-(id)decodeRootObjectOfClasses:(id)arg0 error:(*id)arg1 ;
-(id)initWithCodingPackage:(id)arg0 error:(*id)arg1 ;
-(id)initWithCodingPackage:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;


@end


#endif