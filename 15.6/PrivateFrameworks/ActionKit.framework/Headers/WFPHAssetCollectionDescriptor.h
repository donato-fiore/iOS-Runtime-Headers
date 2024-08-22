// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPHASSETCOLLECTIONDESCRIPTOR_H
#define WFPHASSETCOLLECTIONDESCRIPTOR_H

@class MTLModel, NSString;
@protocol NSSecureCoding;



@interface WFPHAssetCollectionDescriptor : MTLModel <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


+(BOOL)supportsSecureCoding;
+(NSUInteger)storageBehaviorForPropertyWithKey:(id)arg0 ;
+(id)JSONKeyPathsByPropertyKey;
-(id)initWithLocalIdentifier:(id)arg0 localizedTitle:(id)arg1 ;


@end


#endif