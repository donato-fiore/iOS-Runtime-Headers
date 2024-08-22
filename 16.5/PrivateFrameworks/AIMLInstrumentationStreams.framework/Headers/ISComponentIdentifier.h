// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISCOMPONENTIDENTIFIER_H
#define ISCOMPONENTIDENTIFIER_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface ISComponentIdentifier : NSObject {
    ? componentIdentifier;
}


@property (nonatomic, readonly) int componentName;
@property (nonatomic, readonly) NSUUID *uuid;


-(id)init;
-(id)initWithName:(int)arg0 uuid:(id)arg1 ;


@end


#endif