// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCDUMPFIELD_H
#define TCDUMPFIELD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TCDumpType.h"

@interface TCDumpField : NSObject {
    TCDumpType *mType;
    NSString *mName;
}




-(id)initWithType:(id)arg0 name:(id)arg1 ;
-(id)name;
-(id)type;


@end


#endif