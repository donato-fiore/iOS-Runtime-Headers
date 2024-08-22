// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QUARANTINEFILEHANDLER_H
#define QUARANTINEFILEHANDLER_H


#import <Foundation/Foundation.h>


@interface QuarantineFileHandler : NSObject

@property (readonly, nonatomic) BOOL isQuarantined; // ivar: _isQuarantined


-(BOOL)applyMountPointsWithBSDName:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;


@end


#endif