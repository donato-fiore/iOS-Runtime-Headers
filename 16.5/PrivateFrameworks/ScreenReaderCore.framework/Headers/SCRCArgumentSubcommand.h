// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCARGUMENTSUBCOMMAND_H
#define SCRCARGUMENTSUBCOMMAND_H

@class NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface SCRCArgumentSubcommand : NSObject

@property (retain, nonatomic) NSMutableArray *_optionMutableArray; // ivar: __optionMutableArray
@property (readonly, copy, nonatomic) NSArray *optionArray;
@property (copy, nonatomic) NSString *subcommandName; // ivar: _subcommandName


+(id)subcommandWithName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)formattedHelpFooter;
-(id)formattedHelpHeader;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(int)run;
-(void)addOption:(char)arg0 argument:(id)arg1 target:(id)arg2 action:(SEL)arg3 argumentDescription:(id)arg4 required:(BOOL)arg5 ;
-(void)showHelp;
-(void)stop;
-(void)stopDueToSigTerm;


@end


#endif