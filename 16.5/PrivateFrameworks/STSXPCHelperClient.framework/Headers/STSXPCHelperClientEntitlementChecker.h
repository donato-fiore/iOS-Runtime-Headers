// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSXPCHELPERCLIENTENTITLEMENTCHECKER_H
#define STSXPCHELPERCLIENTENTITLEMENTCHECKER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STSXPCHelperClientEntitlementChecker : NSObject <NSCopying>

 {
    BOOL _xpcHelperClientTransceiveProxyListenerAccess;
    int _clientProcessIdentifier;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif