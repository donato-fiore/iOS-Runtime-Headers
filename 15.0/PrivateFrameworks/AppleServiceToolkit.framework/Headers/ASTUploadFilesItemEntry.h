// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTUPLOADFILESITEMENTRY_H
#define ASTUPLOADFILESITEMENTRY_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface ASTUploadFilesItemEntry : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *pubKeyDigest; // ivar: _pubKeyDigest
@property (retain, nonatomic) NSString *sig; // ivar: _sig
@property (retain, nonatomic) NSNumber *size; // ivar: _size
@property (retain, nonatomic) NSString *status; // ivar: _status
@property (retain, nonatomic) NSString *uploadId; // ivar: _uploadId
@property (retain, nonatomic) NSString *uploadUrl; // ivar: _uploadUrl


-(id)initWithId:(id)arg0 andName:(id)arg1 andSig:(id)arg2 andPubKeyDigest:(id)arg3 andStatus:(id)arg4 andSize:(id)arg5 andUploadUrl:(id)arg6 ;


@end


#endif