// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHMIGRATOR_H
#define CHMIGRATOR_H


#import <Foundation/Foundation.h>

#import "CallDBMigrator.h"

@interface CHMigrator : NSObject {
    CallDBMigrator *_migrator;
}




-(id)init;
-(void)migrate:(id)arg0 queue:(id)arg1 block:(id)arg2 ;


@end


#endif