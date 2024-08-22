// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHCOLLECTIONLISTANCESTRYCONTEXT_H
#define PHCOLLECTIONLISTANCESTRYCONTEXT_H

@class NSMutableDictionary;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface PHCollectionListAncestryContext : NSObject

@property (retain) NSObject<NSFastEnumeration> *allCollectionLists; // ivar: _allCollectionLists
@property (retain) NSMutableDictionary *collectionListsByOID; // ivar: _collectionListsByOID


-(id)folderForID:(id)arg0 ;
-(id)initWithCollectionLists:(id)arg0 ;


@end


#endif