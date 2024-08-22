// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIDPNGRAMWORDENTRYPAIR_H
#define TIDPNGRAMWORDENTRYPAIR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TIWordEntryAligned.h"

@interface TIDPNgramWordEntryPair : NSObject

@property (readonly, nonatomic, getter=isStandaloneString) BOOL standaloneString;
@property (retain, nonatomic) TIWordEntryAligned *wordEntryAligned; // ivar: _wordEntryAligned
@property (retain, nonatomic) NSString *wordString; // ivar: _wordString


-(id)initWithWordString:(id)arg0 ;
-(id)initWithWordString:(id)arg0 wordEntryAligned:(id)arg1 ;


@end


#endif