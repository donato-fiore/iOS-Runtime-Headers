// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSCONTENTHANDLEEXCEPTIONALMODESBOX_H
#define DNDSCONTENTHANDLEEXCEPTIONALMODESBOX_H

@class NSArray, DNDContactHandle;

#import <Foundation/Foundation.h>


@interface DNDSContentHandleExceptionalModesBox : NSObject

@property (readonly, copy, nonatomic) NSArray *allowed; // ivar: _allowed
@property (readonly, copy, nonatomic) DNDContactHandle *contactHandle; // ivar: _contactHandle
@property (readonly, copy, nonatomic) NSArray *silenced; // ivar: _silenced


-(id)initWithContactHandle:(id)arg0 allowed:(id)arg1 silenced:(id)arg2 ;


@end


#endif