// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISJSONDATAPROVIDER_H
#define ISJSONDATAPROVIDER_H



#import "ISDataProvider.h"

@interface ISJSONDataProvider : ISDataProvider

@property NSUInteger parserOptions; // ivar: _options


-(BOOL)parseData:(id)arg0 returningError:(*id)arg1 ;


@end


#endif