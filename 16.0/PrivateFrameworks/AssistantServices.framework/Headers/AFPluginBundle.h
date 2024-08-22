// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFPLUGINBUNDLE_H
#define AFPLUGINBUNDLE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AFPluginBundle : NSObject

@property (retain, nonatomic) NSMutableDictionary *classIdentifiers; // ivar: _classIdentifiers
@property (retain, nonatomic) Class factoryClass; // ivar: _factoryClass
@property (retain, nonatomic) id *factoryInstance; // ivar: _factoryInstance


-(BOOL)supportsClassIdentifier:(id)arg0 forDomainKey:(id)arg1 groupIdentifier:(id)arg2 ;
-(id)init;
-(void)registerClassIdentifier:(id)arg0 forDomain:(id)arg1 inGroup:(id)arg2 ;


@end


#endif