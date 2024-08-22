// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMANAGEDOBJECTCODINGCHANGESET_H
#define HMDMANAGEDOBJECTCODINGCHANGESET_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HMDManagedObjectCodingChangeSet : NSObject {
    NSMutableDictionary *_changedObjects;
}


@property (readonly, getter=isEmpty) BOOL empty;


-(NSInteger)changeScopeForObjectWithID:(id)arg0 attributeKeys:(*id)arg1 relationshipKeys:(*id)arg2 ;
-(id)initWithCodingModel:(id)arg0 context:(id)arg1 changes:(id)arg2 ;
-(id)initWithCodingModel:(id)arg0 context:(id)arg1 transactions:(id)arg2 ;


@end


#endif