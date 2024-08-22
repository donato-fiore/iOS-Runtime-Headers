// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRMSFAIRPLAYKEYBOARDENCRYPTION_H
#define TVRMSFAIRPLAYKEYBOARDENCRYPTION_H

@class NSData;

#import <Foundation/Foundation.h>


@interface TVRMSFairPlayKeyboardEncryption : NSObject {
    NSData *_challenge;
    BOOL _certIsTrusted;
    *__SecKey _pubKeyRef;
}




-(BOOL)_verifyCert:(id)arg0 ;
-(BOOL)isTrusted;
-(id)_convertDataToString:(id)arg0 ;
-(id)_convertStringToData:(id)arg0 ;
-(id)encryptString:(id)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)setChallengeString:(id)arg0 ;
-(void)setLeafString:(id)arg0 ;


@end


#endif