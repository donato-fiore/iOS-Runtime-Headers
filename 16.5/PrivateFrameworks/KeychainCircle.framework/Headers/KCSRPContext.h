// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCSRPCONTEXT_H
#define KCSRPCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface KCSRPContext : NSObject

@property *ccsrp_ctx context; // ivar: _context
@property *ccrng_state rng; // ivar: _rng
@property (retain) NSString *user; // ivar: _user


+(id)createWithUser:(id)arg0 digestInfo:(struct ccdigest_info *)arg1 group:(struct ccdh_gp *)arg2 randomSource:(struct ccrng_state *)arg3 ;
-(BOOL)isAuthenticated;
-(id)dataForPassword:(id)arg0 ;
-(id)getKey;
-(id)initWithUser:(id)arg0 digestInfo:(struct ccdigest_info *)arg1 group:(struct ccdh_gp *)arg2 randomSource:(struct ccrng_state *)arg3 ;
-(void)dealloc;


@end


#endif