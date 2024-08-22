// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRFINISHEDEDITINGCOMMAND_H
#define CRFINISHEDEDITINGCOMMAND_H

@class NSString, NSDictionary;
@protocol CRCommand;

#import <Foundation/Foundation.h>


@interface CRFinishedEditingCommand : NSObject <CRCommand>

 {
    NSUInteger _commandDirection;
}


@property (nonatomic) NSUInteger commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: userInfo


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif