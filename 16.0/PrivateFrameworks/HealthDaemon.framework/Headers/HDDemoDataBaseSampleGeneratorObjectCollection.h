// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEMODATABASESAMPLEGENERATOROBJECTCOLLECTION_H
#define HDDEMODATABASESAMPLEGENERATOROBJECTCOLLECTION_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject {
    NSMutableSet *_objectsFromPhone;
    NSMutableSet *_objectsFromWatch;
    NSMutableDictionary *_objectsFromPhoneApps;
    NSMutableDictionary *_objectUUIDToAssocatedObjectUUIDs;
}




-(id)init;
-(id)objectsFromPhone;
-(id)objectsFromPhoneApps;
-(id)objectsFromWatch;
-(void)addObjectFromPhone:(id)arg0 ;
-(void)addObjectFromWatch:(id)arg0 ;
-(void)addObjects:(id)arg0 fromPhoneAppWithBundleIdentifier:(id)arg1 ;
-(void)addObjectsFromPhone:(id)arg0 ;
-(void)addObjectsFromWatch:(id)arg0 ;
-(void)enumerateObjectAssociations:(id)arg0 ;
-(void)setAssociatedObjectUUIDs:(id)arg0 forObjectUUID:(id)arg1 ;


@end


#endif