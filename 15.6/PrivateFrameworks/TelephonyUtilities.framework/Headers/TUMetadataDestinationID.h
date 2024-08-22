// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUMETADATADESTINATIONID_H
#define TUMETADATADESTINATIONID_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "TUHandle.h"

@interface TUMetadataDestinationID : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) TUHandle *handle; // ivar: _handle
@property (readonly, copy, nonatomic) NSString *isoCountryCode;


+(BOOL)supportsSecureCoding;
+(id)metadataDestinationIDForCall:(id)arg0 ;
+(id)metadataDestinationIDsForCHRecentCall:(id)arg0 ;
+(id)metadataDestinationIDsForCHRecentCalls:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMetadataDestinationID:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinationID:(id)arg0 isoCountryCode:(id)arg1 ;
-(id)initWithHandle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif