// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCSCONTROLLER_H
#define GCSCONTROLLER_H

@class NSDictionary, NSString, NSDate;
@protocol NSCopying, NSSecureCoding, GCSJSONSerializable, GCSJSONObject;

#import <Foundation/Foundation.h>

#import "GCSProfile.h"
#import "GCSElement.h"

@interface GCSController : NSObject <NSCopying, NSSecureCoding, GCSJSONSerializable>



@property (readonly, nonatomic) GCSProfile *baseProfile; // ivar: _baseProfile
@property (readonly, nonatomic) NSDictionary *buttons; // ivar: _buttons
@property (readonly, nonatomic) NSDictionary *dpads; // ivar: _dpads
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) NSObject<GCSJSONObject> *jsonObject;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedProductCategory;
@property (readonly, nonatomic) NSString *logoSfSymbolsName; // ivar: _logoSfSymbolsName
@property (readonly, nonatomic) NSDictionary *miscellaneous; // ivar: _miscellaneous
@property (readonly, nonatomic) NSDate *modifiedDate; // ivar: _modifiedDate
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly, nonatomic) NSString *productCategoryKey; // ivar: _productCategoryKey
@property (readonly, nonatomic) GCSElement *shareButton; // ivar: _shareButton
@property (readonly, nonatomic) BOOL supportsHaptics; // ivar: _supportsHaptics
@property (readonly, nonatomic) BOOL supportsLight; // ivar: _supportsLight


+(BOOL)supportsSecureCoding;
+(id)archivalClasses;
-(id)allButtons;
-(id)allDpads;
-(id)allElements;
-(id)copyWithBaseProfile:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)id;
-(id)initDummy;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)initWithName:(id)arg0 persistentIdentifier:(id)arg1 productCategoryKey:(id)arg2 hidden:(BOOL)arg3 shareButton:(id)arg4 buttons:(id)arg5 dpads:(id)arg6 logoSfSymbolsName:(id)arg7 supportsHaptics:(BOOL)arg8 supportsLight:(BOOL)arg9 baseProfile:(id)arg10 miscellaneous:(id)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif