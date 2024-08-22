// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSMARTPROPERTYFETCHER_H
#define CNSMARTPROPERTYFETCHER_H

@class NSString;
@protocol CNKeyDescriptor_Private;

#import <Foundation/Foundation.h>


@interface CNSmartPropertyFetcher : NSObject <CNKeyDescriptor_Private>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_cn_ignorableKeys;
-(id)_cn_optionalKeys;
-(id)_cn_requiredKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_cn_executeGetterForRepresentedKeys:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif