// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRRAPPORTTRANSPORTCONFIGURATION_H
#define MRRAPPORTTRANSPORTCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MRRapportTransportConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *deviceUID; // ivar: _deviceUID
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *sessionUID; // ivar: _sessionUID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif