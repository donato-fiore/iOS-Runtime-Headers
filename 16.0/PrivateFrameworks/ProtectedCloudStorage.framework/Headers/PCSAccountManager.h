// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCSACCOUNTMANAGER_H
#define PCSACCOUNTMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PCSAccountManager : NSObject

@property (retain) NSString *dsid; // ivar: _dsid


-(NSUInteger)accountStatus;
-(id)initWithDSID:(id)arg0 ;


@end


#endif