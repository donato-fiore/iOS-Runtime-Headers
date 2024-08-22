// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMIGRATIONSERVICEOPTIONS_H
#define PLMIGRATIONSERVICEOPTIONS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSString *clientBundleId; // ivar: _clientBundleId
@property unsigned short option; // ivar: _option
@property (copy) NSString *suggestedDestinationName; // ivar: _suggestedDestinationName


+(BOOL)supportsSecureCoding;
-(BOOL)isPMSOption:(unsigned short)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)nameForOption:(unsigned short)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif