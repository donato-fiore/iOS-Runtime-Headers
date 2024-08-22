// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EMSEARCHABLEINDEXPENDINGREMOVALS_H
#define _EMSEARCHABLEINDEXPENDINGREMOVALS_H

@class NSMutableDictionary, NSArray, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EMSearchableIndexPendingRemovals : NSObject <NSCopying>

 {
    NSMutableDictionary *_reasonsByIdentifier;
}


@property (readonly) NSUInteger count;
@property (readonly, nonatomic) NSArray *deletedIdentifiers;
@property (copy, nonatomic) NSSet *exclusionReasons; // ivar: _exclusionReasons
@property (readonly, nonatomic) NSArray *identifiers;
@property (copy, nonatomic) NSSet *purgeReasons; // ivar: _purgeReasons
@property (readonly, nonatomic) NSArray *purgedIdentifiers;


-(id)_identifiersPassingReasonsTest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPurgeReasons:(id)arg0 exclusionReasons:(id)arg1 ;
-(void)addIdentifiers:(id)arg0 withReasons:(id)arg1 ;
-(void)removeAllIdentifiers;
-(void)removeIdentifier:(id)arg0 ;


@end


#endif