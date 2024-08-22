// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKOBJECT_H
#define CKOBJECT_H

@class NSString, NSSet;
@protocol CKPropertyCoding;

#import <Foundation/Foundation.h>

#import "CKObjCClass.h"

@interface CKObject : NSObject <CKPropertyCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKObjCClass *objcClass;
@property (readonly, nonatomic) NSSet *propertyNamesNotToEncode;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)dictionaryPropertyEncoding;
-(id)initWithPropertyDictionary:(id)arg0 ;


@end


#endif