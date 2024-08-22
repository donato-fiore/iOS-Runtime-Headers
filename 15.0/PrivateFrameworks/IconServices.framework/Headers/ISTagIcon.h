// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISTAGICON_H
#define ISTAGICON_H

@class NSString;


#import "ISBindableIcon.h"

@interface ISTagIcon : ISBindableIcon

@property (readonly) NSString *baseType; // ivar: _baseType
@property (readonly) NSString *tag; // ivar: _tag
@property (readonly) NSString *tagClass; // ivar: _tagClass


+(BOOL)supportsSecureCoding;
-(id)_fallbackKey;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileExtension:(id)arg0 ;
-(id)initWithFileExtension:(id)arg0 baseType:(id)arg1 ;
-(id)initWithMIMEType:(id)arg0 ;
-(id)initWithModelCode:(id)arg0 ;
-(id)initWithTag:(id)arg0 tagClass:(id)arg1 baseType:(id)arg2 ;
-(id)initWithTypeCode:(unsigned int)arg0 ;
-(id)makeResourceProvider;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif