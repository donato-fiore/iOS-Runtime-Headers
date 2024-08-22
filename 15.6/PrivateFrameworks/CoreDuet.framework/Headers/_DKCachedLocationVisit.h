// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKCACHEDLOCATIONVISIT_H
#define _DKCACHEDLOCATIONVISIT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _DKCachedLocationVisit : NSObject {
    CGFloat _entryTime;
    CGFloat _exitTime;
    NSString *_locationId;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif