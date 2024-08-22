// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVACTION_H
#define COREDAVACTION_H


#import <Foundation/Foundation.h>


@interface CoreDAVAction : NSObject

@property (readonly, nonatomic) int action; // ivar: _action
@property (retain, nonatomic) id *changeContext; // ivar: _changeContext
@property (readonly, nonatomic) id *context; // ivar: _context
@property (nonatomic) BOOL ignoresGuardianRestrictions; // ivar: _ignoresGuardianRestrictions


-(id)description;
-(id)initWithAction:(int)arg0 context:(id)arg1 ;


@end


#endif