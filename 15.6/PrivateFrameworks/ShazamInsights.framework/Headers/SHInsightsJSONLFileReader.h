// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHINSIGHTSJSONLFILEREADER_H
#define SHINSIGHTSJSONLFILEREADER_H

@protocol SHInsightsJSONLDataDetokenizerDelegate;

#import <Foundation/Foundation.h>


@interface SHInsightsJSONLFileReader : NSObject

@property (weak, nonatomic) NSObject<SHInsightsJSONLDataDetokenizerDelegate> *delegate; // ivar: _delegate


-(BOOL)loadDataFromURL:(id)arg0 error:(*id)arg1 ;


@end


#endif