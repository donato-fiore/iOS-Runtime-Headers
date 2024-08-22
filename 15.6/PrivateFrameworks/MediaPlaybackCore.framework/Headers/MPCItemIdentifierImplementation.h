// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCITEMIDENTIFIERIMPLEMENTATION_H
#define MPCITEMIDENTIFIERIMPLEMENTATION_H

@class NSString;
@protocol MPCItemIdentifier, NSCopying;

#import <Foundation/Foundation.h>


@interface MPCItemIdentifierImplementation : NSObject <MPCItemIdentifier, NSCopying>



@property (copy, nonatomic) NSString *contentItemID; // ivar: _contentItemID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger repeatIndex; // ivar: _repeatIndex
@property (readonly) Class superclass;


+(id)identifierForMFQueuePlayerItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContentItemID:(id)arg0 repeatIndex:(NSInteger)arg1 ;


@end


#endif