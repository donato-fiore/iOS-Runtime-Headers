// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCKFETCHRECORDZONECHANGESOPTIONS_H
#define IDSCKFETCHRECORDZONECHANGESOPTIONS_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "IDSCKServerChangeToken.h"

@interface IDSCKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (copy, nonatomic) IDSCKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit


+(Class)__class;
+(id)alloc;


@end


#endif