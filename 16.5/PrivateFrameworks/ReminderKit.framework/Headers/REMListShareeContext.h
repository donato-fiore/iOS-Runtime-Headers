// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLISTSHAREECONTEXT_H
#define REMLISTSHAREECONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "REMList.h"
#import "REMSharee.h"

@interface REMListShareeContext : NSObject

@property (retain, nonatomic) REMList *list; // ivar: _list
@property (readonly, nonatomic) REMSharee *sharedOwner; // ivar: _sharedOwner
@property (readonly, nonatomic) NSArray *sharees;


-(id)initWithList:(id)arg0 ;


@end


#endif