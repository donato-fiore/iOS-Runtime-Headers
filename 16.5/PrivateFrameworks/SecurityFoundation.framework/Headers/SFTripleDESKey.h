// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTRIPLEDESKEY_H
#define SFTRIPLEDESKEY_H

@class SFSymmetricKey;



@interface SFTripleDESKey : SFSymmetricKey {
    id *_tripleDESKeyInternal;
}




-(id)initRandomKeyWithSpecifier:(id)arg0 error:(*id)arg1 ;


@end


#endif