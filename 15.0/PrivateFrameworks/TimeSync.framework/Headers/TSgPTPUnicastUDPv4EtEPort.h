// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSGPTPUNICASTUDPV4ETEPORT_H
#define TSGPTPUNICASTUDPV4ETEPORT_H



#import "TSgPTPFDEtEPort.h"

@interface TSgPTPUnicastUDPv4EtEPort : TSgPTPFDEtEPort



+(id)diagnosticDescriptionForService:(id)arg0 withIndent:(id)arg1 ;
+(id)diagnosticInfoForService:(id)arg0 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg0 andIPv4Address:(unsigned int)arg1 ;
-(id)_destinationAddressString;
-(id)_sourceAddressString;
-(id)initWithInterfaceName:(id)arg0 andIPv4Address:(unsigned int)arg1 ;
-(id)initWithMatchingDictionary:(id)arg0 ;
-(id)initWithService:(id)arg0 ;
-(int)portType;


@end


#endif