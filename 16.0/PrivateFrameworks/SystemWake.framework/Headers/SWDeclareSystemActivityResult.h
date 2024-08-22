// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWDECLARESYSTEMACTIVITYRESULT_H
#define SWDECLARESYSTEMACTIVITYRESULT_H


#import <Foundation/Foundation.h>


@interface SWDeclareSystemActivityResult : NSObject

@property (readonly, nonatomic) unsigned int assertionID; // ivar: _assertionID
@property (readonly, nonatomic) int returnValue; // ivar: _returnValue
@property (readonly, nonatomic) int systemState; // ivar: _systemState


-(id)description;
-(id)initWithReturnValue:(int)arg0 assertionID:(unsigned int)arg1 systemState:(int)arg2 ;


@end


#endif