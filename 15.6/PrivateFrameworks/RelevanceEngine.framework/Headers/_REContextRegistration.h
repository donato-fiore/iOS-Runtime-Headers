// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _RECONTEXTREGISTRATION_H
#define _RECONTEXTREGISTRATION_H

@class NSArray, NSUUID;
@protocol _CDUserContext;

#import <Foundation/Foundation.h>

#import "REDuetContextQuery.h"

@interface _REContextRegistration : NSObject {
    BOOL _registered;
    NSArray *_registrations;
}


@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSObject<_CDUserContext> *context; // ivar: _context
@property (readonly, nonatomic) REDuetContextQuery *query; // ivar: _query
@property (readonly, nonatomic) NSUUID *uuid;


-(id)initWithQuery:(id)arg0 ;
-(void)_evaluateQueryWithRegistration:(BOOL)arg0 ;
-(void)dealloc;
-(void)deregisterWithContext;
-(void)evaluateQuery;
-(void)registerWithContext;


@end


#endif