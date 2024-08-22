// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQTIPICONURL_H
#define ICQTIPICONURL_H



#import "ICQTipIcon.h"
#import "ICQImageURL.h"

@interface ICQTipIconURL : ICQTipIcon

@property (retain, nonatomic) ICQImageURL *imageURL; // ivar: _imageURL


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif