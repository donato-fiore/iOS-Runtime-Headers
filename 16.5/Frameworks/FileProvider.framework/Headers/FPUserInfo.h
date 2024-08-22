// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPUSERINFO_H
#define FPUSERINFO_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface FPUserInfo : NSObject

@property (readonly) NSArray *keys; // ivar: _keys
@property (readonly) NSDictionary *userInfo;
@property (readonly) NSArray *values; // ivar: _values


+(id)mergeWithUserInfo:(id)arg0 intoParentUserInfo:(id)arg1 ;
+(id)unzipKeysWithZippedArray:(id)arg0 ;
+(id)unzipValuesWithZippedArray:(id)arg0 ;
+(id)zipWithArray1:(id)arg0 array2:(id)arg1 ;
-(id)initWithKeys:(id)arg0 values:(id)arg1 ;
-(id)initWithUserInfo:(id)arg0 ;


@end


#endif