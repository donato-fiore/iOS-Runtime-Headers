// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDEFERREDATTACHMENTCOLLECTION_H
#define FBKDEFERREDATTACHMENTCOLLECTION_H

@class NSSet, NSMutableArray;

#import <Foundation/Foundation.h>

#import "FBKGroupedDevice.h"

@interface FBKDeferredAttachmentCollection : NSObject

@property (readonly, nonatomic) NSSet *allMatchers;
@property (retain, nonatomic) FBKGroupedDevice *device; // ivar: _device
@property (retain, nonatomic) NSMutableArray *sortedAttachments; // ivar: _sortedAttachments


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)deferredAttachmentsFromMatchers:(id)arg0 ;
-(id)initDevice:(id)arg0 matcherPredicates:(id)arg1 ;


@end


#endif