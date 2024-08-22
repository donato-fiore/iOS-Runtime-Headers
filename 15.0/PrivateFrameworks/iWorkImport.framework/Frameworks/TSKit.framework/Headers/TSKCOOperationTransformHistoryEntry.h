// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKCOOPERATIONTRANSFORMHISTORYENTRY_H
#define TSKCOOPERATIONTRANSFORMHISTORYENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSKCOOperationTransformHistoryEntry : NSObject {
    NSString *_originalOperationString;
    NSString *_transformingOperationString;
    NSString *_resultOperationString;
}




-(BOOL)applyResult:(*void)arg0 ;
-(id)description;
-(id)initWithOriginalOperation:(*void)arg0 transformingOperation:(*void)arg1 ;


@end


#endif