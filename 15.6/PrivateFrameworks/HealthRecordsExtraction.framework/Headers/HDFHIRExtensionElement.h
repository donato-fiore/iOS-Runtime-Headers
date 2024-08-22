// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDFHIREXTENSIONELEMENT_H
#define HDFHIREXTENSIONELEMENT_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDFHIRExtensionElement : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *JSONDictionary; // ivar: _JSONDictionary
@property (readonly, copy, nonatomic) NSString *URI; // ivar: _URI
@property (readonly, copy, nonatomic) NSObject<NSCopying> *value; // ivar: _value


+(id)FHIRExtensionElementWithJSONObject:(id)arg0 error:(*id)arg1 ;
+(id)FHIRExtensionElementsFromJSONExtensionObject:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithJSONDictionary:(id)arg0 URI:(id)arg1 value:(id)arg2 ;


@end


#endif