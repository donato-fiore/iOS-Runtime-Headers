// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVRAWSPEECHPROFILEENTITYMETADATA_H
#define CKVRAWSPEECHPROFILEENTITYMETADATA_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKVPriorInfo.h"

@interface CKVRawSpeechProfileEntityMetadata : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger categoryIndex; // ivar: _categoryIndex
@property (readonly, nonatomic) NSString *itemId; // ivar: _itemId
@property (readonly, nonatomic) CKVPriorInfo *priorInfo; // ivar: _priorInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRawSpeechProfileEntityMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCategoryIndex:(NSUInteger)arg0 itemId:(id)arg1 priorInfo:(id)arg2 ;


@end


#endif