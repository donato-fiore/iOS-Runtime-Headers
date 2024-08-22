// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADFETCHEDOBJECTSERIALIZER_H
#define CADFETCHEDOBJECTSERIALIZER_H

@class NSArray, NSDictionary, NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>

#import "ClientConnection.h"

@interface CADFetchedObjectSerializer : NSObject

@property (readonly, nonatomic) ClientConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSArray *defaultPropertiesToLoad; // ivar: _defaultPropertiesToLoad
@property (readonly, nonatomic) NSArray *fetchedObjectWrappers;
@property (readonly, nonatomic) NSDictionary *relatedObjectPropertiesToLoad; // ivar: _relatedObjectPropertiesToLoad
@property (readonly, nonatomic) NSMutableSet *seenObjectIDs; // ivar: _seenObjectIDs
@property (readonly, nonatomic) NSMutableArray *wrappers; // ivar: _wrappers


-(id)_fetchedObjectDictionaryForEntity:(*void)arg0 ;
-(id)_properties:(id)arg0 forEntityIfNotSeen:(*void)arg1 objectExists:(*BOOL)arg2 ;
-(id)addEntity:(*void)arg0 ;
-(id)initWithConnection:(id)arg0 defaultPropertiesToLoad:(id)arg1 ;
-(id)initWithConnection:(id)arg0 defaultPropertiesToLoad:(id)arg1 relatedObjectPropertiesToLoad:(id)arg2 ;


@end


#endif