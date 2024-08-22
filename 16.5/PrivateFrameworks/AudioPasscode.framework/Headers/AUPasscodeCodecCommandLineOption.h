// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUPASSCODECODECCOMMANDLINEOPTION_H
#define AUPASSCODECODECCOMMANDLINEOPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AUPasscodeCodecCommandLineOption : NSObject

@property (readonly, nonatomic) NSString *optionDescription; // ivar: _optionDescription
@property (readonly, nonatomic) NSString *optionSyntax; // ivar: _optionSyntax


+(id)optionWithSyntax:(id)arg0 description:(id)arg1 ;
-(id)initWithSyntax:(id)arg0 description:(id)arg1 ;


@end


#endif