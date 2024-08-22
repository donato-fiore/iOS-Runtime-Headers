// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCLAUNCHPRESENTATIONCONFIG_H
#define FCLAUNCHPRESENTATIONCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FCLaunchPresentationConfig : NSObject

@property (nonatomic) NSInteger configVersion; // ivar: _configVersion
@property (retain, nonatomic) NSArray *presentationOperations; // ivar: _presentationOperations


-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif