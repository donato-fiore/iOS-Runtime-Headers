// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MMCSPUTFILE_H
#define MMCSPUTFILE_H

@class NSData, NSString;


#import "MMCSSimpleFile.h"

@interface MMCSPutFile : MMCSSimpleFile

@property (copy) NSData *authRequestData; // ivar: _authRequestData
@property (copy) id *completionBlock; // ivar: _block
@property (copy) id *progressUpdateBlock; // ivar: _updateBlock
@property (copy) NSString *protocolVersion; // ivar: _protocolVersion
@property (copy) id *registrationBlock; // ivar: _registrationBlock


-(void)dealloc;
-(void)setProgress:(CGFloat)arg0 ;


@end


#endif