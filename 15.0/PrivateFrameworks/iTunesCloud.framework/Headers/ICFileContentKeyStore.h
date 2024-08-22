// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICFILECONTENTKEYSTORE_H
#define ICFILECONTENTKEYSTORE_H

@class NSString;
@protocol ICContentKeyStoreProtocol;

#import <Foundation/Foundation.h>


@interface ICFileContentKeyStore : NSObject <ICContentKeyStoreProtocol>

 {
    NSString *_filePath;
}




-(BOOL)containsKeyForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)_filePathForKeyIdentifier:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)loadKeyForIdentifier:(id)arg0 renewalDate:(*id)arg1 error:(*id)arg2 ;
-(id)removeKeyForIdentifier:(id)arg0 ;
-(id)saveKey:(id)arg0 forIdentifier:(id)arg1 withRenewalDate:(id)arg2 ;
-(void)enumerateKeysUsingBlock:(id)arg0 ;


@end


#endif