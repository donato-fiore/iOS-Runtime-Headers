// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSSIDDISCLOSUREWARNING_H
#define WFSSIDDISCLOSUREWARNING_H

@class NSString;


#import "WFDisclosureWarning.h"

@interface WFSSIDDisclosureWarning : WFDisclosureWarning

@property (readonly, nonatomic) NSString *displayedNetworkName; // ivar: _displayedNetworkName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayedNetworkName:(id)arg0 ;
-(id)localizedMessage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif