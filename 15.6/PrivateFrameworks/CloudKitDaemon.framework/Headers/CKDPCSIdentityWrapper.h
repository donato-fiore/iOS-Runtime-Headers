// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPCSIDENTITYWRAPPER_H
#define CKDPCSIDENTITYWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKDPCSIdentityWrapper : NSObject

@property (readonly, nonatomic) *_PCSIdentitySetData identitySet; // ivar: _identitySet
@property (readonly, nonatomic) NSString *identityString; // ivar: _identityString
@property (readonly, nonatomic) NSString *primaryServiceName; // ivar: _primaryServiceName


-(id)initWithIdentitySet:(struct _PCSIdentitySetData *)arg0 withPrimaryServiceName:(id)arg1 ;
-(void)dealloc;


@end


#endif