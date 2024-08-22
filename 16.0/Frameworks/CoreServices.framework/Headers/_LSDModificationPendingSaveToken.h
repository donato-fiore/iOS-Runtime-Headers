// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSDMODIFICATIONPENDINGSAVETOKEN_H
#define _LSDMODIFICATIONPENDINGSAVETOKEN_H

@class NSMutableArray, NSUUID, NSString;
@protocol _LSPendingSaveToken;

#import <Foundation/Foundation.h>


@interface _LSDModificationPendingSaveToken : NSObject <_LSPendingSaveToken>

 {
    NSMutableArray *_waiters;
    NSUUID *_uuid;
    optional<NSError *> _saveError;
    unfair_lock_mutex _mutex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithUUID:(id)arg0 ;
-(void)saveDidHappen:(BOOL)arg0 error:(id)arg1 ;
-(void)waitForResult:(id)arg0 ;


@end


#endif