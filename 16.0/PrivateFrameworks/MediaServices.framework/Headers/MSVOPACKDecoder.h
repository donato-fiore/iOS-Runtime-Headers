// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVOPACKDECODER_H
#define MSVOPACKDECODER_H

@class NSCoder, NSString, NSMapTable, NSArray, NSDictionary, NSMutableArray;
@protocol MSVSegmentedSubDecoder;



@interface MSVOPACKDecoder : NSCoder <MSVSegmentedSubDecoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *objectLookupTable; // ivar: _objectLookupTable
@property (readonly, nonatomic) NSArray *objects; // ivar: _objects
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) NSMutableArray *wrapperStack; // ivar: _wrapperStack


+(id)decodedObjectOfClass:(Class)arg0 fromData:(id)arg1 error:(*id)arg2 ;
+(id)decodedObjectOfClass:(Class)arg0 fromData:(id)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
+(id)decodedObjectOfClasses:(id)arg0 fromData:(id)arg1 error:(*id)arg2 ;
+(id)decodedObjectOfClasses:(id)arg0 fromData:(id)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
-(BOOL)allowsKeyedCoding;
-(BOOL)containsValueForKey:(id)arg0 ;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(BOOL)requiresSecureCoding;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(char *)decodeBytesForKey:(id)arg0 returnedLength:(*NSUInteger)arg1 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)_decodeNumberForKey:(id)arg0 ;
-(id)_decodeOPACKObject:(id)arg0 ofClasses:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)decodeRootObjectOfClasses:(id)arg0 error:(*id)arg1 ;
-(id)initForReadingFromData:(id)arg0 error:(*id)arg1 ;
-(id)initForReadingFromData:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;
-(void)_validateClass:(Class)arg0 fromSupportedClasses:(id)arg1 ;
-(void)beginDecodingPartialTopLevelObjectOfClasses:(id)arg0 ;
-(void)finishDecodingPartialTopLevelObject;


@end


#endif