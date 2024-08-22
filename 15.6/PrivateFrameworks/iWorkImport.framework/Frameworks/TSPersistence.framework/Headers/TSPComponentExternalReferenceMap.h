// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPCOMPONENTEXTERNALREFERENCEMAP_H
#define TSPCOMPONENTEXTERNALREFERENCEMAP_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSPComponentExternalReferenceMap : NSObject <NSCopying>

 {
    *void _map;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initFromMessage:(*void)arg0 ;
-(id)initWithComponentExternalReferenceMap:(id)arg0 ;
-(id)initWithMapSize:(NSUInteger)arg0 ;
-(struct ComponentExternalReferenceInfo )externalReferenceInfoForObjectIdentifier:(NSInteger)arg0 ;
-(void)addExternalReferenceToObjectIdentifier:(NSInteger)arg0 componentIdentifier:(NSInteger)arg1 isWeak:(BOOL)arg2 componentIsVersioned:(BOOL)arg3 ;
-(void)appendReferencesFromMessage:(*void)arg0 componentIsVersioned:(BOOL)arg1 ;
-(void)dealloc;
-(void)enumerateExternalReferences:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif