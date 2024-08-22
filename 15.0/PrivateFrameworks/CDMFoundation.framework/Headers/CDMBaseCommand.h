// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMBASECOMMAND_H
#define CDMBASECOMMAND_H

@class NSString, NSError;
@protocol CDMCommand;

#import <Foundation/Foundation.h>


@interface CDMBaseCommand : NSObject <CDMCommand>



@property (copy, nonatomic) NSString *aceRefId; // ivar: _aceRefId
@property (retain, nonatomic) NSError *cmdError; // ivar: _cmdError
@property (readonly, nonatomic) NSString *commandName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


-(id)init;


@end


#endif