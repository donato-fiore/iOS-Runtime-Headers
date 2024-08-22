// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKSERVERFORMATTEDSTRING_H
#define MKSERVERFORMATTEDSTRING_H

@protocol NSCopying, NSSecureCoding, GEOServerFormattedString;

#import <Foundation/Foundation.h>

#import "MKServerFormattedStringParameters.h"

@interface MKServerFormattedString : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *geoServerString; // ivar: _geoServerString
@property (readonly, copy, nonatomic) MKServerFormattedStringParameters *parameters; // ivar: _parameters


+(BOOL)supportsSecureCoding;
+(id)attributesForServerFormatStyle:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToServerFormattedString:(id)arg0 ;
-(NSUInteger)hash;
-(id)_attributesByTokenForFormatStyles:(id)arg0 ;
-(id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)arg0 geoServerString:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoServerString:(id)arg0 parameters:(id)arg1 ;
-(id)multiPartAttributedStringWithAttributes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif