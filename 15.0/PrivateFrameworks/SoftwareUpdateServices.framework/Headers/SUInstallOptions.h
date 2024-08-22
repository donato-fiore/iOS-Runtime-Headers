// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUINSTALLOPTIONS_H
#define SUINSTALLOPTIONS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "SUOptionsBase.h"

@interface SUInstallOptions : SUOptionsBase <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (nonatomic, getter=isDarkBoot) BOOL darkBoot; // ivar: _darkBoot
@property (nonatomic, getter=isManaged) BOOL managed; // ivar: _managed
@property (nonatomic, getter=isRequired) BOOL required; // ivar: _required


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif