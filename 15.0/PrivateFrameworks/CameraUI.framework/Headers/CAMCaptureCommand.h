// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCAPTURECOMMAND_H
#define CAMCAPTURECOMMAND_H

@class NSString, NSArray, NSDictionary;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface CAMCaptureCommand : NSObject <NSCopying, NSCoding>



@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) BOOL requiresSessionModification;
@property (readonly, copy, nonatomic) NSString *sessionModificationLogReason;
@property (readonly, nonatomic) CGFloat sessionModificationMinimumExecutionTime;
@property (copy, nonatomic) NSArray *subcommands; // ivar: _subcommands
@property (readonly, nonatomic) NSDictionary *userInfo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubcommands:(id)arg0 ;
-(void)addSubcommand:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;
-(void)removeSubcommand:(id)arg0 ;


@end


#endif