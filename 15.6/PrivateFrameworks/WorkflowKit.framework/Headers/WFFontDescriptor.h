// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFFONTDESCRIPTOR_H
#define WFFONTDESCRIPTOR_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFFontDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes


+(BOOL)supportsSecureCoding;
+(id)descriptorWithSerializedRepresentation:(id)arg0 ;
-(id)displayName;
-(id)face;
-(id)family;
-(id)fontWithSize:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFontAttributes:(id)arg0 ;
-(id)initWithPrivateRepresentation:(id)arg0 ;
-(id)name;
-(id)serializedRepresentation;
-(id)visibleName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif