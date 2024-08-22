// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVOPACKENCODER_H
#define MSVOPACKENCODER_H

@class NSCoder, NSString, NSData, NSMapTable, NSMutableArray, NSDictionary;
@protocol NSObject;



@interface MSVOPACKEncoder : NSCoder <NSObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *encodedData; // ivar: _encodedData
@property (nonatomic) BOOL hasFinished; // ivar: _hasFinished
@property (readonly, nonatomic) BOOL hasTopLevelData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *objectLookupTable; // ivar: _objectLookupTable
@property (readonly, nonatomic) NSMutableArray *objects; // ivar: _objects
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) NSMutableArray *wrapperStack; // ivar: _wrapperStack


+(id)encodedDataWithRootObject:(id)arg0 error:(*id)arg1 ;
+(id)encodedDataWithRootObject:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(BOOL)finishEncodingWithError:(*id)arg0 ;
-(BOOL)requiresSecureCoding;
-(id)_convertNumber:(id)arg0 ;
-(id)_convertObject:(id)arg0 ;
-(id)encodedDataWithError:(*id)arg0 ;
-(id)init;
-(void)_encodeNumber:(id)arg0 forKey:(id)arg1 ;
-(void)beginEncodingPartialTopLevelObject:(id)arg0 ;
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
-(void)finishEncodingPartialTopLevelObject;


@end


#endif