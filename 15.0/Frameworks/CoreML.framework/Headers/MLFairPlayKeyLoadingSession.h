// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLFAIRPLAYKEYLOADINGSESSION_H
#define MLFAIRPLAYKEYLOADINGSESSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MLFairPlayKeyLoadingSession : NSObject

@property (copy) NSString *keyIdentifier; // ivar: _keyIdentifier
@property *? sessionContext; // ivar: _sessionContext
@property unsigned int sessionID; // ivar: _sessionID


-(id)generateKeyRequestForKeyIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)generatePersistentKeyBlobFromKeyResponse:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)transformKeyIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif