// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKGREENFIELDPLACEHOLDERCOMPLICATION_H
#define NTKGREENFIELDPLACEHOLDERCOMPLICATION_H

@class NSString, NSNumber;


#import "NTKComplication.h"

@interface NTKGreenfieldPlaceholderComplication : NTKComplication

@property (readonly, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, nonatomic) NSNumber *appStoreItemId; // ivar: _appStoreItemId
@property (readonly, nonatomic) NTKComplication *complication; // ivar: _complication


+(BOOL)supportsSecureCoding;
+(id)placeholderWithComplication:(id)arg0 ;
+(id)placeholderWithComplication:(id)arg0 appStoreItemId:(id)arg1 appName:(id)arg2 ;
-(BOOL)supportsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_generateUniqueIdentifier;
-(id)_initWithComplicationType:(NSUInteger)arg0 JSONDictionary:(id)arg1 ;
-(id)appIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDetailText;
-(id)localizedKeylineLabelText;
-(id)localizedRichDetailText;
-(id)localizedRichKeylineLabelText;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif