// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFCHANGEINFO_H
#define _PFCHANGEINFO_H

@class NSIndexPath;

#import <Foundation/Foundation.h>

#import "_NSDefaultSectionInfo.h"
#import "NSManagedObject.h"

@interface _PFChangeInfo : NSObject {
    NSUInteger _changeType;
    NSIndexPath *_startIndexPath;
    NSIndexPath *_finalIndexPath;
    _NSDefaultSectionInfo *_startSectionInfo;
    _NSDefaultSectionInfo *_finalSectionInfo;
}


@property (readonly, retain, nonatomic) NSManagedObject *object; // ivar: _object


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;


@end


#endif