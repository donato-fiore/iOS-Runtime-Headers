// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKFILERTOKEN_H
#define FBKFILERTOKEN_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface FBKFilerToken : NSObject

@property (readonly, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (readonly, nonatomic) NSNumber *entityID; // ivar: _entityID
@property (readonly, nonatomic) NSUInteger entityType; // ivar: _entityType
@property (readonly, nonatomic) NSString *token; // ivar: _token


-(id)initWithEntityID:(id)arg0 type:(NSUInteger)arg1 token:(id)arg2 dsid:(id)arg3 ;


@end


#endif