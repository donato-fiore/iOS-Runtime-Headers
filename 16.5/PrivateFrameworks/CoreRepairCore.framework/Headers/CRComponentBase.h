// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCOMPONENTBASE_H
#define CRCOMPONENTBASE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRComponentBase : NSObject

@property (retain, nonatomic) NSString *identiferBase64; // ivar: identiferBase64


+(id)sharedSingleton;
-(id)init;
-(id)sha256:(id)arg0 ;
-(unsigned int)CRCreateECDSADerData:(id)arg0 responseDer:(*id)arg1 ;
-(void)challengeComponentWith:(id)arg0 withReply:(id)arg1 ;


@end


#endif