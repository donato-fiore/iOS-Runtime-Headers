// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLGENERATOR_H
#define NSSQLGENERATOR_H


#import <Foundation/Foundation.h>

#import "NSSQLCore.h"

@interface NSSQLGenerator : NSObject {
    NSSQLCore *_persistentStore;
}




+(void)initialize;
-(id)initWithPersistentStore:(id)arg0 ;


@end


#endif