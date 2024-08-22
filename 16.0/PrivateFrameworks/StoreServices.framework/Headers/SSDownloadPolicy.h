// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDOWNLOADPOLICY_H
#define SSDOWNLOADPOLICY_H

@class NSString, NSArray;
@protocol NSSecureCoding, SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSDownloadPolicy : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>



@property (readonly, nonatomic) NSInteger URLBagType; // ivar: _bagType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *downloadKind; // ivar: _downloadKind
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *policyRules; // ivar: _policyRules
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_policyRuleForSizeLimit:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDownloadKind:(id)arg0 URLBagType:(NSInteger)arg1 ;
-(id)initWithNetworkConstraints:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPolicyRule:(id)arg0 ;
-(void)unionNetworkConstraints:(id)arg0 ;
-(void)unionPolicyRule:(id)arg0 ;


@end


#endif