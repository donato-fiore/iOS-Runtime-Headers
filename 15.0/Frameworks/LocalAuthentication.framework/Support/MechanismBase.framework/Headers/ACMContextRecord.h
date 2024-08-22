// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACMCONTEXTRECORD_H
#define ACMCONTEXTRECORD_H

@protocol LAContextExternalizationProt;

#import <Foundation/Foundation.h>


@interface ACMContextRecord : NSObject

@property (readonly, weak, nonatomic) NSObject<LAContextExternalizationProt> *cachedExternalizationDelegate; // ivar: _cachedExternalizationDelegate
@property (readonly, nonatomic) *__ACMHandle context; // ivar: _context
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) unsigned int passphrasePurpose; // ivar: _passphrasePurpose


-(id)initWithACMContext:(struct __ACMHandle *)arg0 cachedExternalizationDelegate:(id)arg1 ;


@end


#endif