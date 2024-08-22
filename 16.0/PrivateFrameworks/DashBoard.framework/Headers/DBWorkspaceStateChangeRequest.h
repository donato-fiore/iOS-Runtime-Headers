// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBWORKSPACESTATECHANGEREQUEST_H
#define DBWORKSPACESTATECHANGEREQUEST_H

@class RBSProcessHandle, NSArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface DBWorkspaceStateChangeRequest : NSObject <NSCopying, NSMutableCopying>

 {
    RBSProcessHandle *_source;
}


@property (readonly, nonatomic) NSArray *changeItems; // ivar: _changeItems
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)_initWithRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif