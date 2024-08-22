// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISSECURECONTROLCATEGORY_H
#define _UISSECURECONTROLCATEGORY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UISSecureControlCategory : NSObject <NSCopying, NSSecureCoding>

 {
    ? _fields;
}


@property (readonly, nonatomic) NSString *iconGlyph;
@property (readonly, nonatomic) unsigned int secureName;
@property (readonly, nonatomic) unsigned int secureNameForDrawing;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)authenticationMessageContextForStyle:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 iconIndex:(NSUInteger)arg1 labelIndex:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif