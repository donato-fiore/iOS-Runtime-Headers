// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTTUTTERANCEREQUEST_H
#define RTTUTTERANCEREQUEST_H

@class TUCall, NSIndexPath, NSString;

#import <Foundation/Foundation.h>


@interface RTTUtteranceRequest : NSObject

@property (retain, nonatomic) TUCall *call; // ivar: _call
@property (weak, nonatomic) NSIndexPath *cellIndexPath; // ivar: _cellIndexPath
@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) NSString *string; // ivar: _string


+(id)utteranceRequestWithIndex:(NSUInteger)arg0 forString:(id)arg1 inCellPath:(id)arg2 call:(id)arg3 ;
-(id)description;


@end


#endif