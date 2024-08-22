// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MONTREALMODELJSONPARSER_H
#define MONTREALMODELJSONPARSER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "MontrealNNModelNetwork.h"

@interface MontrealModelJSONParser : NSObject

@property (readonly) NSDictionary *infoDictionary; // ivar: _infoDictionary
@property (readonly) NSString *jsonDir; // ivar: _jsonDir
@property (readonly) MontrealNNModelNetwork *network; // ivar: _network


-(id)createJSONFromFile:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif