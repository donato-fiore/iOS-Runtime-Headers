// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKKEYCHAINITEMWRAPPER_H
#define PKKEYCHAINITEMWRAPPER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface PKKeychainItemWrapper : NSObject {
    BOOL _invisible;
}


@property (nonatomic) NSUInteger accessibility; // ivar: _accessibility
@property (retain, nonatomic) NSMutableDictionary *genericPasswordQuery; // ivar: genericPasswordQuery
@property (retain, nonatomic) NSMutableDictionary *keychainItemData; // ivar: keychainItemData
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger type; // ivar: type


-(id)dictionaryToSecItemFormat:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 accessGroup:(id)arg1 serviceName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 accessGroup:(id)arg1 serviceName:(id)arg2 type:(NSUInteger)arg3 invisible:(BOOL)arg4 ;
-(id)initWithIdentifier:(id)arg0 accessGroup:(id)arg1 serviceName:(id)arg2 type:(NSUInteger)arg3 invisible:(BOOL)arg4 accessibility:(NSUInteger)arg5 ;
-(id)objectForKey:(id)arg0 ;
-(id)secItemFormatToDictionary:(id)arg0 ;
-(void)_resetKeychainItem:(BOOL)arg0 ;
-(void)applyAccessibilityValueToDictionary:(id)arg0 ;
-(void)applySynchronizableValueToDictionary:(id)arg0 ;
-(void)resetKeychainItem;
-(void)resetLocalKeychainItem;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)writeToKeychain;


@end


#endif