// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BNBANNERSOURCEPRESENTABLESPECIFICATION_H
#define BNBANNERSOURCEPRESENTABLESPECIFICATION_H

@class NSString, NSUUID;
@protocol BNPresentableSpecifying;


#import "BNPresentableIdentification.h"

@interface BNBannerSourcePresentableSpecification : BNPresentableIdentification <BNPresentableSpecifying>



@property (nonatomic) UIEdgeInsets contentOutsets; // ivar: _contentOutsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (nonatomic) NSInteger presentableType; // ivar: _presentableType
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;


-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif