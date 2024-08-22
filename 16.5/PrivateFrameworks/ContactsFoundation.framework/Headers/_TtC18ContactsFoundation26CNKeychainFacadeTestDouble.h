// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18CONTACTSFOUNDATION26CNKEYCHAINFACADETESTDOUBLE_H
#define _TTC18CONTACTSFOUNDATION26CNKEYCHAINFACADETESTDOUBLE_H

@protocol _TtP18ContactsFoundation24CNKeychainFacadeProtocol_;

#import <Foundation/Foundation.h>


@interface _TtC18ContactsFoundation26CNKeychainFacadeTestDouble : NSObject <_TtP18ContactsFoundation24CNKeychainFacadeProtocol_>

 {
    ? keychainEnabled;
    ? keyDict;
}




-(id)createSymmetricKeyIfNeededWithLabel:(id)arg0 ;
-(id)existingSymmetricKeyWithLabel:(id)arg0 ;
-(id)init;
-(id)removeEncryptionKeyWithLabel:(id)arg0 ;


@end


#endif