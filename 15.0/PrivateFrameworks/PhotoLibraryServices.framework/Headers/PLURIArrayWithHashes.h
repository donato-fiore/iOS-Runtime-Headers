// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLURIARRAYWITHHASHES_H
#define PLURIARRAYWITHHASHES_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLURIArrayWithHashes : NSObject

@property (retain, nonatomic) NSMutableArray *attributeValues; // ivar: _attributeValues
@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic) *__CFArray hashes; // ivar: _hashes
@property (readonly, nonatomic) BOOL isUpdate;
@property (retain, nonatomic) NSMutableArray *relationshipValues; // ivar: _relationshipValues
@property (nonatomic) *__CFArray uris; // ivar: _uris


-(id)description;
-(id)init;
-(id)initForUpdates:(BOOL)arg0 ;


@end


#endif