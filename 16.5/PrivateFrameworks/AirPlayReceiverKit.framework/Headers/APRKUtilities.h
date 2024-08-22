// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APRKUTILITIES_H
#define APRKUTILITIES_H


#import <Foundation/Foundation.h>


@interface APRKUtilities : NSObject



+(id)baseDictionaryForResponseToRequestWithDictionary:(id)arg0 ;
+(id)baseDictionaryForUpstreamMessageWithType:(id)arg0 ;
+(id)dictionaryForError:(id)arg0 ;
+(id)secureStopURL;


@end


#endif