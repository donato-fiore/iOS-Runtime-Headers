// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDMODELINPUTMETADATA_H
#define AMDMODELINPUTMETADATA_H

@class NSString, NSNumber, NSArray;
@protocol PostRemapOperation;

#import <Foundation/Foundation.h>


@interface AMDModelInputMetadata : NSObject <PostRemapOperation>



@property NSInteger dataType; // ivar: _dataType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *hashOpModValue; // ivar: _hashOpModValue
@property (retain, nonatomic) NSNumber *paddingValue; // ivar: _paddingValue
@property (retain, nonatomic) NSString *postRemapOperation; // ivar: _postRemapOperation
@property (retain, nonatomic) NSArray *shape; // ivar: _shape
@property (retain, nonatomic) NSNumber *size; // ivar: _size
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *truncateOpMaxValue; // ivar: _truncateOpMaxValue
@property (retain, nonatomic) NSNumber *truncateOpMinValue; // ivar: _truncateOpMinValue


+(NSInteger)getDataTypeFromString:(id)arg0 ;
-(BOOL)isValid;
-(NSInteger)getDataType;
-(id)getHashOpModValue;
-(id)getPaddingValue;
-(id)getPostRemapOperationName;
-(id)getShape;
-(id)getSize;
-(id)getTruncateOpMaxValue;
-(id)getTruncateOpMinValue;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif