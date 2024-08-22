// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSSHCONFIG_H
#define NMSSHCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NMSSHConfig : NSObject

@property (retain, nonatomic) NSArray *hostConfigs; // ivar: _hostConfigs


+(id)configFromFile:(id)arg0 ;
-(BOOL)host:(id)arg0 matchesSubpattern:(id)arg1 ;
-(id)arrayFromString:(id)arg0 ;
-(id)blanksCharacterSet;
-(id)hostConfigForHost:(id)arg0 ;
-(id)initWithFile:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(int)host:(id)arg0 matchesPatternList:(id)arg1 ;
-(struct _NSRange )rangeInString:(id)arg0 fromLocationUntilBlankOrEnd:(NSUInteger)arg1 ;
-(struct _NSRange )rangeOfFirstTokenInString:(id)arg0 suffix:(*id)arg1 ;
-(struct _NSRange )rangeOfQuotedSubstringInString:(id)arg0 startingAtIndex:(NSUInteger)arg1 ;
-(void)parseHostNameWithArguments:(id)arg0 intoArray:(id)arg1 ;
-(void)parseHostWithArguments:(id)arg0 intoArray:(id)arg1 ;
-(void)parseIdentityFileWithArguments:(id)arg0 intoArray:(id)arg1 ;
-(void)parseLine:(id)arg0 intoArray:(id)arg1 ;
-(void)parsePortWithArguments:(id)arg0 intoArray:(id)arg1 ;
-(void)parseUserWithArguments:(id)arg0 intoArray:(id)arg1 ;


@end


#endif