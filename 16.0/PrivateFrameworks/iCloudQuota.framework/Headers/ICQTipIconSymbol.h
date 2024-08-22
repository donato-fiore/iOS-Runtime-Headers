// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQTIPICONSYMBOL_H
#define ICQTIPICONSYMBOL_H

@class NSString;


#import "ICQTipIcon.h"

@interface ICQTipIconSymbol : ICQTipIcon

@property (retain, nonatomic) NSString *id; // ivar: _id
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSString *systemColorName; // ivar: _systemColorName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif