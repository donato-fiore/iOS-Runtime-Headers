// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDUETCONTEXTQUERY_H
#define REDUETCONTEXTQUERY_H

@class NSArray, NSSet, NSString, _CDContextualPredicate, _CDMDCSContextualPredicate, NSUUID;

#import <Foundation/Foundation.h>


@interface REDuetContextQuery : NSObject {
    NSArray *_searchKeyPaths;
    id *_evalBlock;
}


@property (retain, nonatomic) NSSet *devices; // ivar: _devices
@property (readonly, nonatomic) NSSet *keyPaths;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) _CDContextualPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSString *registrationID;
@property (readonly, nonatomic) _CDMDCSContextualPredicate *remotePredicate; // ivar: _remotePredicate
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)_keyPathsForDevice:(id)arg0 ;
-(id)_localKeyPaths;
-(id)_localRegistrationWithCallback:(id)arg0 ;
-(id)_remoteRegistrationForDevice:(id)arg0 callback:(id)arg1 ;
-(id)_sortedKeyPaths:(id)arg0 ;
-(id)createRegistrationsWithCallback:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 remotePredicate:(id)arg1 name:(id)arg2 evaluationBlock:(id)arg3 ;
-(id)valueFromUserContext:(id)arg0 ;


@end


#endif