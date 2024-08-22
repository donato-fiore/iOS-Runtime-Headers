// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMLISTSUBLISTCONTEXT_H
#define REMLISTSUBLISTCONTEXT_H


#import <Foundation/Foundation.h>

#import "REMList.h"

@interface REMListSublistContext : NSObject

@property (retain, nonatomic) REMList *list; // ivar: _list


-(id)fetchCustomSmartListsWithError:(*id)arg0 ;
-(id)fetchListsWithError:(*id)arg0 ;
-(id)initWithList:(id)arg0 ;


@end


#endif