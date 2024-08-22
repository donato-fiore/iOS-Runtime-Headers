// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRVENDORMETADATAPRODUCT_H
#define HMMTRVENDORMETADATAPRODUCT_H

@class HMFObject, NSNumber, NSDictionary, NSURL, NSString;
@protocol NSCopying, NSMutableCopying;



@interface HMMTRVendorMetadataProduct : HMFObject <NSCopying, NSMutableCopying>



@property (copy) NSNumber *categoryNumber; // ivar: _categoryNumber
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (copy) NSNumber *identifier; // ivar: _identifier
@property (copy) NSURL *installationGuideURL; // ivar: _installationGuideURL
@property (copy) NSString *model; // ivar: _model
@property (copy) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 categoryNumber:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 dictionaryRepresentation:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif