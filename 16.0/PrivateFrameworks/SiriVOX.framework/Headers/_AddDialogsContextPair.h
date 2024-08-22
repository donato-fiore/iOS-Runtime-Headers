// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ADDDIALOGSCONTEXTPAIR_H
#define _ADDDIALOGSCONTEXTPAIR_H

@protocol SAAceCommand, NSCopying;

#import <Foundation/Foundation.h>


@interface _AddDialogsContextPair : NSObject

@property (readonly, retain) NSObject<SAAceCommand> *command; // ivar: _command
@property (readonly, retain) NSObject<NSCopying> *context; // ivar: _context


-(id)initWithCommand:(id)arg0 context:(id)arg1 ;


@end


#endif