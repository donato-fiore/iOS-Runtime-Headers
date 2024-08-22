// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BNPRESENTABLEIDENTIFICATION_H
#define BNPRESENTABLEIDENTIFICATION_H

@class NSString, NSUUID;
@protocol BNPresentableUniquelyIdentifying, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface BNPresentableIdentification : NSObject <BNPresentableUniquelyIdentifying, BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy, nonatomic) NSString *requesterIdentifier; // ivar: _requesterIdentifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsBSXPCSecureCoding;
+(id)genericIdentificationForPresentable:(id)arg0 ;
+(id)identificationWithRequesterIdentifier:(id)arg0 ;
+(id)identificationWithRequesterIdentifier:(id)arg0 requestIdentifier:(id)arg1 ;
+(id)identificationWithRequesterIdentifier:(id)arg0 requestIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
+(id)requesterIdentificationForPresentable:(id)arg0 ;
+(id)uniqueIdentificationForPresentable:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithRequesterIdentifier:(id)arg0 requestIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif