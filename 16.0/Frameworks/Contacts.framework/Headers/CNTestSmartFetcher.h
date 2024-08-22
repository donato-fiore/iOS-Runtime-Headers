// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNTESTSMARTFETCHER_H
#define CNTESTSMARTFETCHER_H

@class NSString, NSArray;
@protocol CNKeyDescriptor_Private;

#import <Foundation/Foundation.h>


@interface CNTestSmartFetcher : NSObject <CNKeyDescriptor_Private>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *optionalKeys; // ivar: _optionalKeys
@property (readonly, nonatomic) NSArray *requiredKeys; // ivar: _requiredKeys
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_cn_ignorableKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequiredKeys:(id)arg0 optionalKeys:(id)arg1 ;
-(void)_cn_executeGetterForRepresentedKeys:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif