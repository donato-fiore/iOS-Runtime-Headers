// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DICRYPTOHELPER_H
#define DICRYPTOHELPER_H


#import <Foundation/Foundation.h>


@interface DICryptoHelper : NSObject



+(BOOL)getPassphraseUsingSaksWithBackendXPC:(id)arg0 passPhrase:(char *)arg1 hasSaksKey:(*BOOL)arg2 error:(*id)arg3 ;
+(struct unique_ptr<char, std::function<void (char *)>> )getAuthEntryWithBackend:(struct shared_ptr<Backend> )arg0 authTableNumEntries:(int)arg1 mechanism:(int)arg2 hasSaksKey:(*BOOL)arg3 error:(*id)arg4 ;


@end


#endif