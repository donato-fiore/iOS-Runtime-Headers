// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DURESULTOBJC_H
#define DURESULTOBJC_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding8DUResult.h"

@interface DUResultObjC : NSObject {
    _TtC21DocumentUnderstanding8DUResult *_underlyingResult;
}


@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *determiningModelIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;


-(id)init;


@end


#endif