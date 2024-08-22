// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTEXTRACTIONITEM_H
#define CKCONTEXTEXTRACTIONITEM_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKContextExtractionItem : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *extractionSourceClassName; // ivar: _extractionSourceClassName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 type:(NSUInteger)arg1 bundleIdentifier:(id)arg2 ;
-(id)toJSONSerializableDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif