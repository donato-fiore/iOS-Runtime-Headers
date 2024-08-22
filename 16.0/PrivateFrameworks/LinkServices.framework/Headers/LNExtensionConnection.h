// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNEXTENSIONCONNECTION_H
#define LNEXTENSIONCONNECTION_H

@class _EXExtensionProcess;


#import "LNConnection.h"

@interface LNExtensionConnection : LNConnection

@property (retain, nonatomic) _EXExtensionProcess *extensionProcess; // ivar: _extensionProcess


-(id)extensionIdentityWithExtensionPointIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)connectWithOptions:(id)arg0 ;
-(void)connectionOperationWillStart:(id)arg0 ;
-(void)dealloc;
-(void)refreshWithOptions:(id)arg0 ;


@end


#endif