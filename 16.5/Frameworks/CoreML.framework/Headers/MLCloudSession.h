// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCLOUDSESSION_H
#define MLCLOUDSESSION_H

@class CKContainer, NSString;

#import <Foundation/Foundation.h>


@interface MLCloudSession : NSObject

@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


-(id)fetchKeyResponseFromServerForKeyID:(id)arg0 signedKeyRequest:(id)arg1 error:(*id)arg2 ;
-(id)initWithTeamIdentifier:(id)arg0 ;


@end


#endif