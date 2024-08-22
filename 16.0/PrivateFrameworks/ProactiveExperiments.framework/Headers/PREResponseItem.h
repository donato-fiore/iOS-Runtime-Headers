// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRERESPONSEITEM_H
#define PRERESPONSEITEM_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PREResponseItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *categoryId; // ivar: _categoryId
@property (readonly, nonatomic) NSNumber *isCustomResponse; // ivar: _isCustomResponse
@property (readonly, nonatomic) NSNumber *isRobotResponse; // ivar: _isRobotResponse
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSNumber *modelId; // ivar: _modelId
@property (readonly, nonatomic) NSNumber *replySubgroupId; // ivar: _replySubgroupId
@property (readonly, nonatomic) NSString *replyText; // ivar: _replyText
@property (readonly, nonatomic) NSNumber *replyTextId; // ivar: _replyTextId
@property (readonly, nonatomic) NSNumber *responseClassId; // ivar: _responseClassId


+(BOOL)supportsSecureCoding;
+(id)responseItemArrayFromResponseKitArray:(id)arg0 forLocale:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResponseItem:(id)arg0 ;
-(id)description;
-(id)initWithCategoryId:(id)arg0 modelId:(id)arg1 responseClassId:(id)arg2 replySubgroupId:(id)arg3 replyTextId:(id)arg4 replyText:(id)arg5 language:(id)arg6 isCustomResponse:(id)arg7 isRobotResponse:(id)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif