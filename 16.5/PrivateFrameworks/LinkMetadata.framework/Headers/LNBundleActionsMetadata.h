// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNBUNDLEACTIONSMETADATA_H
#define LNBUNDLEACTIONSMETADATA_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNBundleActionsMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *actions; // ivar: _actions
@property (readonly, nonatomic) NSDictionary *systemProtocolDefaults; // ivar: _systemProtocolDefaults


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActions:(id)arg0 systemProtocolDefaults:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif