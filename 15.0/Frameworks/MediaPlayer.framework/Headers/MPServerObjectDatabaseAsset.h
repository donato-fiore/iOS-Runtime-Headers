// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSERVEROBJECTDATABASEASSET_H
#define MPSERVEROBJECTDATABASEASSET_H

@class NSString, NSData, NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface MPServerObjectDatabaseAsset : NSObject

@property (readonly, nonatomic) NSInteger flavor; // ivar: _flavor
@property (readonly, copy, nonatomic) NSString *hashedPersonID; // ivar: _hashedPersonID
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSData *miniSINF; // ivar: _miniSINF
@property (readonly, copy, nonatomic) NSArray *sinfs; // ivar: _sinfs
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


-(id)_initWithIdentifier:(id)arg0 hashedPersonID:(id)arg1 flavor:(NSInteger)arg2 url:(id)arg3 miniSINF:(id)arg4 sinfs:(id)arg5 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 hashedPersonID:(id)arg1 flavor:(NSInteger)arg2 url:(id)arg3 miniSINF:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 hashedPersonID:(id)arg1 flavor:(NSInteger)arg2 url:(id)arg3 sinfs:(id)arg4 ;
-(id)initWithSQLRowResult:(id)arg0 ;


@end


#endif