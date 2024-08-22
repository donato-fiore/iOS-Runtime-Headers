// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSDSERVICEDOMAIN_H
#define _LSDSERVICEDOMAIN_H


#import <Foundation/Foundation.h>


@interface _LSDServiceDomain : NSObject {
    optional<unsigned int> _resolvedDomainUID;
    unsigned short _specifierType;
}




+(id)defaultServiceDomainIndirect;
-(id)debugDescription;


@end


#endif