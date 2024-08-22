// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCONTAINERBUNDLEPROPERTYENUMERATOR_H
#define BRCONTAINERBUNDLEPROPERTYENUMERATOR_H

@class NSEnumerator, NSDictionary, NSString;



@interface BRContainerBundlePropertyEnumerator : NSEnumerator {
    NSDictionary *_plist;
    NSEnumerator *_enumerator;
    NSString *_propertyKey;
    Class _valueClass;
}




-(id)initWithContainerPlist:(id)arg0 propertyKey:(id)arg1 valuesOfClass:(Class)arg2 ;
-(id)nextObject;


@end


#endif