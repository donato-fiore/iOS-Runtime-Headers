// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OPENURLTARGET_H
#define OPENURLTARGET_H


#import <Foundation/Foundation.h>


@interface OpenURLTarget : NSObject {
    unsigned int _applicationState;
    ? _targetData;
    NSInteger _targetIndex;
}




-(NSInteger)compare:(id)arg0 ;
-(id)copyURLForURL:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithTargetIdentifier:(id)arg0 ;


@end


#endif