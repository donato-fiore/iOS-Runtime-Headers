// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSGPTPETHERNETPORT_H
#define TSGPTPETHERNETPORT_H



#import "TSgPTPFDPtPPort.h"

@interface TSgPTPEthernetPort : TSgPTPFDPtPPort



+(id)diagnosticDescriptionForService:(id)arg0 withIndent:(id)arg1 ;
+(id)diagnosticInfoForService:(id)arg0 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg0 ;
-(id)_destinationAddressString;
-(id)_sourceAddressString;
-(id)initWithInterfaceName:(id)arg0 ;
-(id)initWithMatchingDictionary:(id)arg0 ;
-(id)initWithService:(id)arg0 ;
-(int)portType;


@end


#endif