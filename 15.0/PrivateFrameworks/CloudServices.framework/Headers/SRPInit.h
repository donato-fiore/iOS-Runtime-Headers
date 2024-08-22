// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRPINIT_H
#define SRPINIT_H

@class NSString, NSDictionary;
@protocol SRPClientRequest;

#import <Foundation/Foundation.h>

#import "SecureBackup.h"

@interface SRPInit : NSObject <SRPClientRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *dsid;
@property (retain, nonatomic) NSDictionary *escrowRecord; // ivar: _escrowRecord
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *recordID; // ivar: _recordID
@property (copy, nonatomic) NSString *recordLabel; // ivar: _recordLabel
@property (readonly, copy, nonatomic) NSString *recoveryPassphrase;
@property (readonly, retain, nonatomic) SecureBackup *sb; // ivar: _sb
@property (readonly) Class superclass;


-(id)initWithSecureBackup:(id)arg0 ;
-(id)validateInput;


@end


#endif