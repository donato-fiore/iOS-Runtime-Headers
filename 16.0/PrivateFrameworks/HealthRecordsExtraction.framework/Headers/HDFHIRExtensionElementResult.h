// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFHIREXTENSIONELEMENTRESULT_H
#define HDFHIREXTENSIONELEMENTRESULT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HDFHIRExtensionElement.h"

@interface HDFHIRExtensionElementResult : NSObject <NSCopying>



@property (readonly, copy, nonatomic) HDFHIRExtensionElement *extensionElement; // ivar: _extensionElement
@property (readonly, nonatomic) BOOL isModifierExtension; // ivar: _isModifierExtension
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithExtensionElement:(id)arg0 keyPath:(id)arg1 isModifierExtension:(BOOL)arg2 ;


@end


#endif