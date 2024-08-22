// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPERRORREDACTIONHELPER_H
#define FPERRORREDACTIONHELPER_H

@class NSError;

#import <Foundation/Foundation.h>


@interface FPErrorRedactionHelper : NSObject {
    NSError *error;
    NSUInteger depth;
}




-(id)description;
-(id)initWithError:(id)arg0 depth:(NSUInteger)arg1 ;
-(id)parseErrorIntoStringRedacted:(BOOL)arg0 ;
-(id)redactedDescription;


@end


#endif