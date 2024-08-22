// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADVIVISUALSEARCHREGIONATTRIBUTES_H
#define MADVIVISUALSEARCHREGIONATTRIBUTES_H

@class NSString, NSDictionary, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MADVIVisualSearchThirdPartyObject.h"

@interface MADVIVisualSearchRegionAttributes : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *detailedDescription; // ivar: _detailedDescription
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSString *knowledgeGraphID; // ivar: _knowledgeGraphID
@property (readonly, nonatomic) NSDictionary *knowledgeProperties; // ivar: _knowledgeProperties
@property (readonly, nonatomic) NSString *shortDescription; // ivar: _shortDescription
@property (readonly, nonatomic) MADVIVisualSearchThirdPartyObject *thirdPartyObject; // ivar: _thirdPartyObject
@property (readonly, nonatomic) float thumbnailAspectRatio; // ivar: _thumbnailAspectRatio
@property (readonly, nonatomic) NSURL *thumbnailURL; // ivar: _thumbnailURL
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *webURL; // ivar: _webURL


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 knowledgeGraphID:(id)arg1 title:(id)arg2 thumbnailURL:(id)arg3 thumbnailAspectRatio:(float)arg4 shortDescription:(id)arg5 detailedDescription:(id)arg6 webURL:(id)arg7 knowledgeProperties:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif