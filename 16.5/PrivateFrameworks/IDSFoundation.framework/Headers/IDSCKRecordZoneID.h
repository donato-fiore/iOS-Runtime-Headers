// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCKRECORDZONEID_H
#define IDSCKRECORDZONEID_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IDSCKRecordZoneID : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *ownerName; // ivar: _ownerName
@property (readonly, nonatomic) NSString *zoneName; // ivar: _zoneName


+(Class)__class;
+(id)alloc;


@end


#endif