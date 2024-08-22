// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKINTERFACENAMETOIPADDRESSMAP_H
#define CRKINTERFACENAMETOIPADDRESSMAP_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CRKInterfaceNameToIPAddressMap : NSObject {
    NSDictionary *mIPAddressesByInterfaceName;
}




+(id)makeEnumerator;
+(id)makeIPAddressesByInterfaceName;
-(id)IPAddressForInterfaceName:(id)arg0 ;
-(id)init;


@end


#endif