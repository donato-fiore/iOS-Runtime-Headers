// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDENTITYRESOLUTIONREQUEST_H
#define GDENTITYRESOLUTIONREQUEST_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GDMetaContext.h"

@interface GDEntityResolutionRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *entityTypeFilter; // ivar: _entityTypeFilter
@property (readonly, copy, nonatomic) GDMetaContext *metaContext; // ivar: _metaContext
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (readonly, copy, nonatomic) NSArray *span; // ivar: _span
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 mode:(NSInteger)arg1 metaContext:(id)arg2 entityTypeFilter:(id)arg3 requestID:(id)arg4 span:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif