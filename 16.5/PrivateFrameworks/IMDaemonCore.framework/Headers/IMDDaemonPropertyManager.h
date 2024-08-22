// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDDAEMONPROPERTYMANAGER_H
#define IMDDAEMONPROPERTYMANAGER_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface IMDDaemonPropertyManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutablePersistentProperties; // ivar: _mutablePersistentProperties
@property (retain, nonatomic) NSMutableDictionary *mutableProperties; // ivar: _mutableProperties
@property (readonly, copy, nonatomic) NSDictionary *persistentProperties;
@property (readonly, copy, nonatomic) NSDictionary *properties;


+(id)sharedManager;
-(id)init;
-(id)valueOfPersistentProperty:(id)arg0 ;
-(id)valueOfProperty:(id)arg0 ;
-(void)setValue:(id)arg0 ofPersistentProperty:(id)arg1 ;
-(void)setValue:(id)arg0 ofProperty:(id)arg1 ;


@end


#endif