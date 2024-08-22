// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMUSICPLAYERCONTROLLERAPPLICATIONQUEUEMODIFICATIONS_H
#define MPMUSICPLAYERCONTROLLERAPPLICATIONQUEUEMODIFICATIONS_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPMusicPlayerControllerApplicationQueueModifications : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *insertedDescriptors; // ivar: _insertedDescriptors
@property (readonly, nonatomic) NSArray *removedItemIdentifiers; // ivar: _removedItemIdentifiers


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInsertedDescriptors:(id)arg0 removedItemIdentifiers:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif