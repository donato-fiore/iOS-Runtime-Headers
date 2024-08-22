// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRLOCALIZATION_H
#define MRLOCALIZATION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MRLocalization : NSObject

@property (retain, nonatomic) NSMutableDictionary *localizationTable; // ivar: _localizationTable


+(id)sharedInstance;
-(id)localizedStringWithKey:(id)arg0 defaultString:(id)arg1 ;


@end


#endif