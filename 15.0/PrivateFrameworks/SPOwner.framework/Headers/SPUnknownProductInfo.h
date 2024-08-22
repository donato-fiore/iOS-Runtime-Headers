// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUNKNOWNPRODUCTINFO_H
#define SPUNKNOWNPRODUCTINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPUnknownProductMetadata.h"

@interface SPUnknownProductInfo : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (copy, nonatomic) SPUnknownProductMetadata *disableMetadata; // ivar: _disableMetadata
@property (copy, nonatomic) SPUnknownProductMetadata *learnModeMetadata; // ivar: _learnModeMetadata
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif