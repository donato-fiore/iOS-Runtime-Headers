// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSEARCHATTRIBUTIONINFO_H
#define GEOSEARCHATTRIBUTIONINFO_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOSearchAttributionSource.h"

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding>

 {
    NSArray *_logoPaths;
    NSArray *_snippetLogoPaths;
}


@property (readonly, nonatomic) NSString *appAdamID;
@property (readonly, nonatomic) NSArray *attributionApps;
@property (readonly, nonatomic) NSString *captionDisplayName; // ivar: _captionDisplayName
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned int requirementsMask; // ivar: _attributionRequirementsMask
@property (readonly, nonatomic) BOOL shouldOpenInAppStore;
@property (readonly, nonatomic) GEOSearchAttributionSource *source; // ivar: _source
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) NSString *webBaseActionURL;


+(BOOL)supportsSecureCoding;
-(BOOL)hasAttributionRequirement:(int)arg0 ;
-(BOOL)supportsActionURLs;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSource:(id)arg0 localizedAttribution:(id)arg1 logoPaths:(id)arg2 snippetLogoPaths:(id)arg3 ;
-(id)logoPathForScale:(CGFloat)arg0 ;
-(id)snippetLogoPathForScale:(CGFloat)arg0 ;
-(void)addLogoPath:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif