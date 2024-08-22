// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSECTIONEDIDENTIFIERLISTENTRYPOSITIONKEY_H
#define MPSECTIONEDIDENTIFIERLISTENTRYPOSITIONKEY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPSectionedIdentifierListEntryPositionKey : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (copy, nonatomic) NSString *generation; // ivar: _generation


+(BOOL)supportsSecureCoding;
+(id)positionKeyWithDeviceIdentifier:(id)arg0 generation:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif