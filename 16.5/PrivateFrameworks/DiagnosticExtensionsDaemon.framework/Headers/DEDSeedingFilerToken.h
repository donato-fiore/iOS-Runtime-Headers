// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDSEEDINGFILERTOKEN_H
#define DEDSEEDINGFILERTOKEN_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface DEDSeedingFilerToken : NSObject

@property (readonly, nonatomic) NSString *dsid; // ivar: _dsid
@property (readonly, nonatomic) NSNumber *entityID; // ivar: _entityID
@property (readonly, nonatomic) NSInteger submissionType; // ivar: _submissionType
@property (readonly, nonatomic) NSString *token; // ivar: _token


-(id)compiledEntityID;
-(id)initWithEntityID:(id)arg0 type:(NSInteger)arg1 token:(id)arg2 dsid:(id)arg3 ;


@end


#endif