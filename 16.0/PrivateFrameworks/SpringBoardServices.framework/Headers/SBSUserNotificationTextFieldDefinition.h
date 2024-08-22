// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSUSERNOTIFICATIONTEXTFIELDDEFINITION_H
#define SBSUSERNOTIFICATIONTEXTFIELDDEFINITION_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBSUserNotificationTextFieldDefinition : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) BOOL _hasSetMaxLength; // ivar: _hasSetMaxLength
@property (readonly, nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (readonly, nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (readonly, nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (readonly, nonatomic) NSUInteger maxLength; // ivar: _maxLength
@property (readonly, nonatomic, getter=isSecure) BOOL secure; // ivar: _isSecure
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(id)_definitionsFromSerializedDefinitions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDictionary:(id)arg0 ;
-(id)build;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_copyPropertiesToDefinition:(id)arg0 ;


@end


#endif