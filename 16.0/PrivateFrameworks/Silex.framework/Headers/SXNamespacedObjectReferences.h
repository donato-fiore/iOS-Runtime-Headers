// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXNAMESPACEDOBJECTREFERENCES_H
#define SXNAMESPACEDOBJECTREFERENCES_H

@class NSMutableDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SXNamespacedObjectReferences : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_componentStyleReferences;
    NSMutableDictionary *_componentTextStyleReferences;
    NSMutableDictionary *_textStyleReferences;
}




-(id)componentStyleIdentifierForNamespacedComponentStyleIdentifier:(id)arg0 component:(id)arg1 ;
-(id)componentTextStyleIdentifierForNamespacedComponentTextStyleIdentifier:(id)arg0 component:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)namespacedComponentStyleIdentifierForIdentifier:(id)arg0 component:(id)arg1 ;
-(id)namespacedComponentStyleIdentifiersForIdentifiers:(id)arg0 component:(id)arg1 ;
-(id)namespacedComponentTextStyleIdentifierForIdentifier:(id)arg0 component:(id)arg1 ;
-(id)namespacedComponentTextStyleIdentifiersForIdentifiers:(id)arg0 component:(id)arg1 ;
-(id)namespacedTextStyleIdentifierForIdentifier:(id)arg0 component:(id)arg1 ;
-(id)namespacedTextStyleIdentifiersForIdentifiers:(id)arg0 component:(id)arg1 ;
-(id)referencesForComponent:(id)arg0 map:(id)arg1 ;
-(id)textStyleIdentifierForNamespacedTextStyleIdentifier:(id)arg0 component:(id)arg1 ;
-(void)populateWithSource:(id)arg0 ;


@end


#endif