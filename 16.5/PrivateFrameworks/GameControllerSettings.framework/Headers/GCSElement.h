// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCSELEMENT_H
#define GCSELEMENT_H

@class NSString;
@protocol NSSecureCoding, GCSJSONSerializable, GCSJSONObject;

#import <Foundation/Foundation.h>


@interface GCSElement : NSObject <NSSecureCoding, GCSJSONSerializable>



@property (readonly, nonatomic) NSObject<GCSJSONObject> *jsonObject;
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *nameLocalizationKey; // ivar: _nameLocalizationKey
@property (readonly, nonatomic) int remappingKey; // ivar: _remappingKey
@property (readonly, copy, nonatomic) NSString *sfSymbolsName; // ivar: _sfSymbolsName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)initWithName:(id)arg0 nameLocalizationKey:(id)arg1 sfSymbolsName:(id)arg2 remappingKey:(int)arg3 kind:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif