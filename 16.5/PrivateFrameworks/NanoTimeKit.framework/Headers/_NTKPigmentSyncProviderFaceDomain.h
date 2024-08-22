// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKPIGMENTSYNCPROVIDERFACEDOMAIN_H
#define _NTKPIGMENTSYNCPROVIDERFACEDOMAIN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NTKFace.h"

@interface _NTKPigmentSyncProviderFaceDomain : NSObject

@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NTKFace *face; // ivar: _face


-(id)initWithFace:(id)arg0 domain:(id)arg1 ;


@end


#endif