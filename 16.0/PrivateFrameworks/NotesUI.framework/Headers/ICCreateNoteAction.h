// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCREATENOTEACTION_H
#define ICCREATENOTEACTION_H


#import <Foundation/Foundation.h>

#import "ICUnifiedNoteContext.h"

@interface ICCreateNoteAction : NSObject

@property (readonly, nonatomic) ICUnifiedNoteContext *noteContext; // ivar: _noteContext


-(id)initWithNoteContext:(id)arg0 ;
-(id)performWithTitle:(id)arg0 contents:(id)arg1 container:(id)arg2 error:(*id)arg3 ;


@end


#endif