// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSDMODIFYSERVICE_H
#define _LSDMODIFYSERVICE_H

@class LSDService;



@interface _LSDModifyService : LSDService



+(BOOL)isEnabled;
+(Class)clientClass;
+(id)XPCInterface;
+(id)dispatchQueue;
+(unsigned short)connectionType;


@end


#endif