// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REQUEST_H
#define REQUEST_H

@class NSMutableDictionary, NSMutableArray, NSDate;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "Caller.h"

@interface Request : NSObject {
    NSMutableDictionary *_cachedValues;
    NSMutableArray *_heldObjects;
}


@property (readonly, nonatomic) Caller *caller; // ivar: _caller
@property (readonly, nonatomic) unsigned int identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL interactive; // ivar: _interactive
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSDate *received; // ivar: _received


+(id)current;
+(id)localRequest;
+(id)requestFromCurrentConnection;
-(id)_complexIdentifier:(NSInteger)arg0 object:(id)arg1 ;
-(id)cachedValue:(NSInteger)arg0 error:(*id)arg1 readValueBlock:(id)arg2 ;
-(id)cachedValue:(NSInteger)arg0 object:(id)arg1 error:(*id)arg2 readValueBlock:(id)arg3 ;
-(id)initWithCaller:(id)arg0 ;
-(void)_invalidateCachedValue:(id)arg0 identifier:(id)arg1 ;
-(void)dealloc;
-(void)holdObject:(id)arg0 ;


@end


#endif