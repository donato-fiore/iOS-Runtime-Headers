// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESINTERNALDODMLTASK_H
#define DESINTERNALDODMLTASK_H

@class NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "DESRecordSet.h"
#import "DESRecipe.h"
#import "DESUploadTransport.h"

@interface DESInternalDodMLTask : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly, nonatomic) DESRecordSet *matchingRecordSet; // ivar: _matchingRecordSet
@property (readonly, nonatomic) DESRecipe *recipe; // ivar: _recipe
@property (readonly, nonatomic) NSString *testingRecipePath; // ivar: _testingRecipePath
@property (readonly, nonatomic) DESUploadTransport *uploadTransport; // ivar: _uploadTransport


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecipe:(id)arg0 matchingRecordSet:(id)arg1 baseURL:(id)arg2 localIdentifier:(id)arg3 recipePath:(id)arg4 uploadTransport:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif