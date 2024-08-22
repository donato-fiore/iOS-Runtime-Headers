// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARSPEECHMODELINFO_H
#define _EARSPEECHMODELINFO_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface _EARSpeechModelInfo : NSObject {
    SpeechModelInfo _speechModelInfo;
}


@property (readonly, nonatomic) NSString *acousticProfileVersion;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *phoneSetVersion;
@property (readonly, nonatomic) NSSet *samplingRates;
@property (readonly, nonatomic) NSSet *tasks;
@property (readonly, nonatomic) NSString *version;


-(id)_initWithSpeechModelInfo:(*void)arg0 ;
-(id)initWithConfig:(id)arg0 ;


@end


#endif