// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFRSAKEYPAIR_H
#define SFRSAKEYPAIR_H

@class SFKeyPair;



@interface SFRSAKeyPair : SFKeyPair {
    id *_rsaKeyPairInternal;
}




-(id)initRandomKeyPairWithSpecifier:(id)arg0 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg0 privateKeyDomain:(id)arg1 ;


@end


#endif