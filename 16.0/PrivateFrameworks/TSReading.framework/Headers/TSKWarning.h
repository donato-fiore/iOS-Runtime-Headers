// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKWARNING_H
#define TSKWARNING_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TSKWarning : NSObject

@property (copy, nonatomic) NSArray *infos; // ivar: mInfos
@property (readonly, nonatomic) unsigned int kind; // ivar: mKind
@property (copy, nonatomic) NSString *message; // ivar: mMessage
@property (readonly, nonatomic) int severity; // ivar: mSeverity


+(id)warningWithMessage:(id)arg0 ;
+(id)warningWithMessage:(id)arg0 kind:(unsigned int)arg1 infos:(id)arg2 ;
+(id)warningWithMessage:(id)arg0 kind:(unsigned int)arg1 severity:(int)arg2 infos:(id)arg3 ;
+(id)warningWithMessage:(id)arg0 severity:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithMessage:(id)arg0 kind:(unsigned int)arg1 severity:(int)arg2 infos:(id)arg3 ;
-(void)dealloc;


@end


#endif