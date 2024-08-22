// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MSPFAVORITESREPLICAPLACEHOLDERRECORD_H
#define _MSPFAVORITESREPLICAPLACEHOLDERRECORD_H

@class NSData, NSString;
@protocol MSPFavoritesReplicaRecord, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MSPVectorTimestamp.h"
#import "MSPPosition.h"

@interface _MSPFavoritesReplicaPlaceholderRecord : NSObject <MSPFavoritesReplicaRecord, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *contents; // ivar: _contents
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // ivar: _contentsTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MSPPosition *position; // ivar: _position
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp; // ivar: _positionTimestamp
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContents:(id)arg0 contentsTimestamp:(id)arg1 position:(id)arg2 positionTimestamp:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif