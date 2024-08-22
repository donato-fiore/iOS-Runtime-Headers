// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCSIMPLEENTRYMODEL_H
#define NWCSIMPLEENTRYMODEL_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NWCSimpleEntryModel : NSObject <NSSecureCoding>



@property (readonly) NSArray *hourlyEntryModels; // ivar: _hourlyEntryModels


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntries:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif