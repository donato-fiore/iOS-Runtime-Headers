// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRUPDATEPROGRESSCOMMAND_H
#define CRUPDATEPROGRESSCOMMAND_H

@class NSString, NSProgress, NSDictionary;
@protocol CRCommand;

#import <Foundation/Foundation.h>


@interface CRUpdateProgressCommand : NSObject <CRCommand>



@property (nonatomic) BOOL animatesProgress; // ivar: _animatesProgress
@property (nonatomic) NSUInteger commandDirection; // ivar: commandDirection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: userInfo


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif