// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSERIALIZABLECONTENTPROVIDER_H
#define WFSERIALIZABLECONTENTPROVIDER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFSerializableContentProvider : NSObject

@property (readonly, nonatomic) NSMutableDictionary *entriesForClassNames; // ivar: _entriesForClassNames


+(id)sharedProvider;
-(id)entryConsideringSuperclassesForClass:(Class)arg0 ;
-(id)init;
-(id)objectOfClass:(Class)arg0 withSerializedRepresentation:(id)arg1 ;
-(id)serializedRepresentationForObject:(id)arg0 ;
-(void)registerSerializableContentClasses;


@end


#endif