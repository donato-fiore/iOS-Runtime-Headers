// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXIMAGECAPTIONMODELASSETASSERTION_H
#define AXIMAGECAPTIONMODELASSETASSERTION_H

@class NSString, NSNumber;
@protocol AXAssetAssertion;

#import <Foundation/Foundation.h>


@interface AXImageCaptionModelAssetAssertion : NSObject <AXAssetAssertion>



@property (nonatomic) NSUInteger assertionType; // ivar: _assertionType
@property (readonly, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *maximumCompatibilityVersion; // ivar: _maximumCompatibilityVersion
@property (retain, nonatomic) NSNumber *minimumCompatibilityVersion; // ivar: _minimumCompatibilityVersion
@property (retain, nonatomic) NSString *modelLanguage; // ivar: _modelLanguage
@property (retain, nonatomic) NSString *modelStage; // ivar: _modelStage
@property (retain, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (readonly) Class superclass;


+(id)assertionWithPropertyListRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)assertionsWithPropertyListRepresentations:(id)arg0 ;
+(void)partitionAssertionsWithPropertyListRepresentations:(id)arg0 intoVersionLockedAssertions:(id)arg1 upgradableAssertions:(id)arg2 ;
-(id)propertyListRepresentation;


@end


#endif