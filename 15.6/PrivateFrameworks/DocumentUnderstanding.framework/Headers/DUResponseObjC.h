// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DURESPONSEOBJC_H
#define DURESPONSEOBJC_H


#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding10DUResponse.h"

@interface DUResponseObjC : NSObject {
    _TtC21DocumentUnderstanding10DUResponse *_underlyingReponse;
}


@property (readonly, nonatomic) BOOL isEmpty;


-(id)init;
-(id)resultsFor:(id)arg0 ;
-(void)setUnderlyingRepresentation:(id)arg0 ;


@end


#endif