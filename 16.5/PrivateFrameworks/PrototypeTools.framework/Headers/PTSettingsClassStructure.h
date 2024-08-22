// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTSETTINGSCLASSSTRUCTURE_H
#define PTSETTINGSCLASSSTRUCTURE_H

@class NSDictionary, NSSet, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PTSettingsClassStructure : NSObject <NSSecureCoding>

 {
    NSDictionary *_structNames;
    NSDictionary *_classes;
    NSDictionary *_classNames;
}


@property (retain, nonatomic) NSSet *childKeys; // ivar: _childKeys
@property (retain, nonatomic) NSSet *leafKeys; // ivar: _leafKeys
@property (retain, nonatomic) NSSet *outletKeys; // ivar: _outletKeys
@property (retain, nonatomic) NSString *settingsClassName; // ivar: _settingsClassName
@property (nonatomic) NSUInteger settingsClassVersion; // ivar: _settingsClassVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)_classForKey:(id)arg0 ;
-(Class)childClassForKey:(id)arg0 ;
-(Class)leafClassForKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)_decodeStringSetForKey:(id)arg0 withCoder:(id)arg1 ;
-(id)_decodeStringStringDictionaryForKey:(id)arg0 withCoder:(id)arg1 ;
-(id)filteredForProxySettings;
-(id)initWithCoder:(id)arg0 ;
-(id)leafStructNameForKey:(id)arg0 ;
-(void)_generateClassNamesIfNecessary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif